using UnityEngine;
using System.Collections;
/*
 
 */


public class SensorTest: MonoBehaviour
{
	public GUISkin skin;

	private byte[] data;
	private BluetoothDeviceScript bluetoothDeviceScript;

	private string serviceUUID = "00000002-0000-1000-8000-A0E5E9000000";
	private string characteristicUUID_Buton = "00000207-0000-1000-8000-A0E5E9000000";
    private string characteristicUUID_Pos6D = "00000205-0000-1000-8000-A0E5E9000000";
    
    private string characteristicUUID_Gesture = "00000208-0000-1000-8000-A0E5E9000000";
    private string characteristicUUID_Pos2D = "00000206-0000-1000-8000-A0E5E9000000";
    
    private string characteristicUUID_Motion = "00000209-0000-1000-8000-A0E5E9000000";

void Start()
{

initSensorsConnection();
}

void Update()
{


}
    
public void initSensorsConnection()
{
Debug.Log("Connecting to sensors");
//initialize the Central Service
Debug.Log("initializing..");
bluetoothDeviceScript = BluetoothLEHardwareInterface.Initialize (true, false, null, null);

//retrieve a list of connected devices
Debug.Log("getting a list of devices");
BluetoothLEHardwareInterface.RetrieveListOfPeripheralsWithServices (new string[] { serviceUUID }, null);
// change later to add more services

}

public void subscribeToCharacteristics(int i)
{

if (bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
{
Debug.Log("Subscribe to Characteristics");

BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Pos6D, null, null);
BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Buton, null, null);
    BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Pos2D, null, null);
    BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Gesture, null, null);
    BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Motion, null, null);
  

}

}

public float getSensorLatestPitch(int i)
    {
       //this function will return the Pitch (5 th item in the array)
        // read the byte array
       return  bluetoothDeviceScript.connectedSensors[i].Pose6D_Pitch;
        // get the 5th item
        
        //convert it to float
        
        //return the value
        return 1;
    }
public float getSensorLatestRoll(int i)
    {
       return  bluetoothDeviceScript.connectedSensors[i].Pose6D_Roll;
    }
public float getSensorLatestYaw(int i)
    {
      return  bluetoothDeviceScript.connectedSensors[i].Pose6D_Yaw;
    
    }
   
    public int getNumberConnectedDevices()
    {
        return bluetoothDeviceScript.DiscoveredDeviceList.Count;
    
    }

public void connect6DSensor(int i )
{
Debug.Log("Connect To device ["+i.ToString()+"]");
BluetoothLEHardwareInterface.ConnectToPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[i], null, null, null);

}

    public void shutDown6DSensor(int i )
    {
        Debug.Log("disconnect from device ["+i.ToString()+"]");
        BluetoothLEHardwareInterface.DisconnectPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[i], null);
        
    }

    
public void readCharacteristics(int i)
{
Debug.Log("Reading characterstics");

// read characterstics
    bluetoothDeviceScript.setActiveSensor(i);

BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Pos6D, null);
BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Buton, null);
    BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Pos2D, null);
    BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Gesture, null);
    BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[i], serviceUUID, characteristicUUID_Motion, null);
    
}
    
    
public bool indexExist(int i)
    {
        if ( i< bluetoothDeviceScript.DiscoveredDeviceList.Count ) return true;
        else return false;
    }
    
public IEnumerator readFromAllSensors(float delay)
{
// connect (the session) to the devices
   // Debug.Log("Connect All Sensors");

if (bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
{

    for(int i=0 ; i<bluetoothDeviceScript.DiscoveredDeviceList.Count;i++)
    {
        connect6DSensor(i);
        Debug.Log("Now time to wait...");
        yield return new WaitForSeconds(delay);
        readCharacteristics(i);
        Debug.Log("Wait again....");
        yield return new WaitForSeconds(delay );
    }


} //if

  } // function
    

	void OnGUI ()
	{
		GUI.skin = skin;
// show Deinitialize , Connect to sensors . remove other buttons
		if (GUI.Button (new Rect (10, 0, 600, 100), "Disconnect"))
			BluetoothLEHardwareInterface.DeInitialize (null);
		
		if (GUI.Button (new Rect (10, 100, 600, 100), "Connect"))
        {
            Debug.Log("before calling the function");
            StartCoroutine(readFromAllSensors(1));
            Debug.Log("After calling the function");
        }
        //bluetoothDeviceScript = BluetoothLEHardwareInterface.Initialize (true, false, null, null);
if (GUI.Button (new Rect (10, 200, 300, 100), "Init"))
bluetoothDeviceScript.setSensorNames("730C7862-3DA2-6210-8DEE-840A9CCEFBF2","8CF23DD1-7416-71BF-3EC1-7130674A9440","3","4" , "5" , "6" , "7" , "8","9" , "10");


if (GUI.Button (new Rect (10, 300, 300, 100), "Connect 1"))
connect6DSensor(0);

if (GUI.Button (new Rect (310, 300, 300, 100), "Connect2"))
connect6DSensor(1);


if (GUI.Button (new Rect (10, 400, 300, 100), "read 1"))
readCharacteristics(0);

if (GUI.Button (new Rect (310, 400, 300, 100), "read 2"))
readCharacteristics(1);

if (GUI.Button (new Rect (10, 500, 300, 100), "subscribe 1"))
subscribeToCharacteristics(0);

if (GUI.Button (new Rect (310, 500, 300, 100), "subscribe 2"))
subscribeToCharacteristics(1);
        
        if (GUI.Button (new Rect (10, 600, 300, 100), "tVal 1 "))
            Debug.Log("TVAL="+ getSensorLatestPitch(0));
       /* if (GUI.Button (new Rect (10, 700, 300, 100), "connect and read 1 "))
                    connectAndRead(0);
        
        if (GUI.Button (new Rect (310, 700, 300, 100), "connect and read 2 "))
            connectAndRead(1);
        
        if (GUI.Button (new Rect (10, 800, 600, 100), "connect and read All "))
                        connectAndReadAll();
        
        /*
		if (GUI.Button (new Rect (10, 300, 300, 100), "Scan for Any"))
			BluetoothLEHardwareInterface.ScanForPeripheralsWithServices (null, null);
		
		if (GUI.Button (new Rect (10, 400, 300, 100), "Retrieve Connected"))
			BluetoothLEHardwareInterface.RetrieveListOfPeripheralsWithServices (new string[] { serviceUUID }, null);

		if (GUI.Button (new Rect (10, 500, 300, 100), "Stop Scan"))
			BluetoothLEHardwareInterface.StopScan ();
		
		if (GUI.Button (new Rect (10, 600, 300, 100), "Connect") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
			BluetoothLEHardwareInterface.ConnectToPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[0], null, null, null);
		
		if (GUI.Button (new Rect (10, 700, 300, 100), "Disconnect") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
			BluetoothLEHardwareInterface.DisconnectPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[0], null);

		if (GUI.Button (new Rect (10, 800, 300, 100), "Read Characteristic") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
			BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, null);
		
		if (GUI.Button (new Rect (10, 900, 300, 100), "Write Characteristic") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
		{
			if (data == null)
			{
				data = new byte[64];
				for (int i = 0; i < 64; ++i)
					data[i] = (byte)i;
			}

			BluetoothLEHardwareInterface.WriteCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, data, data.Length, true, null);
		}

		if (GUI.Button (new Rect (10, 1000, 300, 100), "Subscribe Characteristic") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
			BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, null, null);

		if (GUI.Button (new Rect (10, 1100, 300, 100), "UnSubscribe Characteristic") && bluetoothDeviceScript != null && bluetoothDeviceScript.DiscoveredDeviceList != null && bluetoothDeviceScript.DiscoveredDeviceList.Count > 0)
			BluetoothLEHardwareInterface.UnSubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, null);
		
		if (GUI.Button (new Rect (310, 100, 300, 100), "Initialize Peripheral"))
			BluetoothLEHardwareInterface.Initialize (false, true, null, null);

		if (GUI.Button (new Rect (310, 200, 300, 100), "Create Service\nand Characteristic"))
		{
			BluetoothLEHardwareInterface.PeripheralName ("Test Device");

			if (data == null)
			{
				data = new byte[64];
				for (int i = 0; i < 64; ++i)
					data[i] = (byte)i;
			}

			BluetoothLEHardwareInterface.CreateCharacteristic (characteristicUUID, 
			                                                   BluetoothLEHardwareInterface.CBCharacteristicProperties.CBCharacteristicPropertyRead | 
			                                                   BluetoothLEHardwareInterface.CBCharacteristicProperties.CBCharacteristicPropertyWrite | 
			                                                   BluetoothLEHardwareInterface.CBCharacteristicProperties.CBCharacteristicPropertyNotify, 
			                                                   BluetoothLEHardwareInterface.CBAttributePermissions.CBAttributePermissionsReadEncryptionRequired, 
			                                                   null, 0);

			BluetoothLEHardwareInterface.CreateService (serviceUUID, true, null);
		}
		
		if (GUI.Button (new Rect (310, 300, 300, 100), "Start Advertising"))
			BluetoothLEHardwareInterface.StartAdvertising (null);
		
		if (GUI.Button (new Rect (310, 400, 300, 100), "Stop Advertising"))
			BluetoothLEHardwareInterface.StopAdvertising (null);
		
		if (GUI.Button (new Rect (310, 500, 300, 100), "Update Characteristic Value"))
		{
			for (int i = 0; i < data.Length; ++i)
				data[i] = (byte)(data[i] + 1);

			BluetoothLEHardwareInterface.UpdateCharacteristicValue (characteristicUUID, data, data.Length);
		}
*/

	}
}
