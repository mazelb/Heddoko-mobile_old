using UnityEngine;
using System.Collections;

public class sts : MonoBehaviour
{
	public GUISkin skin;

	private byte[] data;
	private BluetoothDeviceScript bluetoothDeviceScript;

	private string serviceUUID = "00000002-0000-1000-8000-A0E5E9000000";
	private string characteristicUUID = "00000207-0000-1000-8000-A0E5E9000000";

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

void connectSensors()
{
//initialize the Central Service (not peripheral)
bluetoothDeviceScript = BluetoothLEHardwareInterface.Initialize (true, false, null, null);
//retrieve a list of connected devices
BluetoothLEHardwareInterface.RetrieveListOfPeripheralsWithServices (new string[] { serviceUUID }, null); // change later to add more services
// connect (the session) to the devices
BluetoothLEHardwareInterface.ConnectToPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[0], null, null, null);
BluetoothLEHardwareInterface.ConnectToPeripheral (bluetoothDeviceScript.DiscoveredDeviceList[1], null, null, null);
// read characterstics
BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, null);
BluetoothLEHardwareInterface.ReadCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[1], serviceUUID, characteristicUUID, null);
// subscribe to characterstics
BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[0], serviceUUID, characteristicUUID, null, null);
BluetoothLEHardwareInterface.SubscribeCharacteristic (bluetoothDeviceScript.DiscoveredDeviceList[1], serviceUUID, characteristicUUID, null, null);

// on received event
// update skeleton
}

	void OnGUI ()
	{
		GUI.skin = skin;
// show Deinitialize , Connect to sensors . remove other buttons
		if (GUI.Button (new Rect (10, 0, 600, 100), "Disconnect"))
			BluetoothLEHardwareInterface.DeInitialize (null);
		
		if (GUI.Button (new Rect (10, 100, 600, 100), "Connect"))
                connectSensors();
        //bluetoothDeviceScript = BluetoothLEHardwareInterface.Initialize (true, false, null, null);
/*
		if (GUI.Button (new Rect (10, 200, 300, 100), "Scan for 1"))
			BluetoothLEHardwareInterface.ScanForPeripheralsWithServices (new string[] { serviceUUID }, null);
		
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
