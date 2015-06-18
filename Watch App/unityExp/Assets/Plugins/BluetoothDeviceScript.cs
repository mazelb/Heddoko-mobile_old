using System;
using System.Collections.Generic;
using UnityEngine;

public class SensorData
{
    // Pos 2D
 public   float Pose2D_X,Pose2D_Y;
    // Pos 6D
  public  float Pose6D_X,Pose6D_Y,Pose6D_Z,Pose6D_Pitch,Pose6D_Roll,Pose6D_Yaw;
    //Motion
   public  float Motion_X1,Motion_X2,Motion_Y1,Motion_Y2,Motion_Z1,Motion_Z2;
    //Gesture
   public  float Gesture_Scroll, Gesture_Direction;
    //Button
    public string buttonState;
    
};
public class BluetoothDeviceScript : MonoBehaviour
{
	public List<string> DiscoveredDeviceList;
    public List<SensorData> connectedSensors;
    
	public Action InitializedAction;
	public Action DeinitializedAction;
	public Action<string> ErrorAction;
	public Action<string> ServiceAddedAction;
	public Action StartedAdvertisingAction;
	public Action StoppedAdvertisingAction;
	public Action<string, string> DiscoveredPeripheralAction;
	public Action<string, string> RetrievedConnectedPeripheralAction;
	public Action<string> ConnectedPeripheralAction;
	public Action<string> DisconnectedPeripheralAction;
	public Action<string, string> DiscoveredServiceAction;
	public Action<string, string, string> DiscoveredCharacteristicAction;
	public Action<string> DidWriteCharacteristicAction;
	public Action<string> DidUpdateNotifiationStateForCharacteristicAction;
	public Action<string, byte[]> DidUpdateCharacteristicValueAction;

	private bool Initialized;

    private int activeSensor=0;
	
	const string deviceInitializedString = "Initialized";
	const string deviceDeInitializedString = "DeInitialized";
	const string deviceErrorString = "Error";
	const string deviceServiceAdded = "ServiceAdded";
	const string deviceStartedAdvertising = "StartedAdvertising";
	const string deviceStoppedAdvertising = "StoppedAdvertising";
	const string deviceDiscoveredPeripheral = "DiscoveredPeripheral";
	const string deviceRetrievedConnectedPeripheral = "RetrievedConnectedPeripheral";
	const string deviceConnectedPeripheral = "ConnectedPeripheral";
	const string deviceDisconnectedPeripheral = "DisconnectedPeripheral";
	const string deviceDiscoveredService = "DiscoveredService";
	const string deviceDiscoveredCharacteristic = "DiscoveredCharacteristic";
	const string deviceDidWriteCharacteristic = "DidWriteCharacteristic";
	const string deviceDidUpdateNotificationStateForCharacteristic = "DidUpdateNotificationStateForCharacteristic";
	const string deviceDidUpdateValueForCharacteristic = "DidUpdateValueForCharacteristic";
	Dictionary<string ,int> sensorNames= new Dictionary<string,int>();
	Dictionary<string , string > sensorIdentifiers = new Dictionary<string,string >();

	public string ownerIdx = "NONE"; 

	// Use this for initialization
	void Start ()
	{
		DiscoveredDeviceList = new List<string>();
        connectedSensors= new List<SensorData>();
	}
	
	// Update is called once per frame
	void Update ()
	{
	}

    static byte[] GetBytes(string str)
    {
        byte[] bytes = new byte[str.Length * sizeof(char)];
        System.Buffer.BlockCopy(str.ToCharArray(), 0, bytes, 0, bytes.Length);
        return bytes;
    }
    
	public void setActiveSensor(int i)
    {
        activeSensor=i;
    }


    
    public void setSensorNames(string s0,string s1,string s2, string s3, string s4, string s5 , string s6 , string  s7 , string s8 , string s9)
    {
        sensorNames.Clear();
        sensorNames.Add(s0,0);
        sensorNames.Add(s1,1);
        sensorNames.Add(s2,2);
        sensorNames.Add(s3,3);
        sensorNames.Add(s4,4);
        sensorNames.Add(s5,5);
        sensorNames.Add(s6,6);
        sensorNames.Add(s7,7);
        sensorNames.Add(s8,8);
        sensorNames.Add(s9,9);
    }

    public string getSensorName(string sensorIdentifier)
    {
        if(sensorIdentifiers.ContainsKey(sensorIdentifier))
        {
            string sensorName=sensorIdentifiers[sensorIdentifier];
      		//Debug.Log("Sensor Name ["+sensorIdentifier+"]="+sensorName);
            return sensorName;
        }
        //Debug.Log("Sensor Name NOT FOUND for identifier : "+sensorIdentifier);
        
        return "N/A";//not found
    }

	public int getSensorID(string sensorName)
    {
        if(sensorNames.ContainsKey(sensorName))
        {
            int sensorID = sensorNames[sensorName];
			//Debug.Log("Sensor ID ["+sensorName+"]="+sensorID);
            return sensorID;
        }
        //Debug.Log("Sensor ID NOT FOUND for name : "+sensorName);
        
        return 0;//not found
    }
    
    
	public void OnBluetoothMessage (string message)
	{
		if (message != null)
		{
			char[] delim = new char[] { '~' };
			string[] parts = message.Split (delim);
			//BluetoothLEHardwareInterface.Log("Active Sensor: "+activeSensor+" Message: "+message);
            if(parts.Length>2)
				if (parts[1]=="00000205-0000-1000-8000-A0E5E9000000") // handle specific ServiceUUID for POSE 6D
            {
             	//BluetoothLEHardwareInterface.Log("POSE 6D: "+parts[2]);
                byte[] Values =System.Convert.FromBase64String(parts[2]);// GetBytes(parts[2]);
                short x =(short) ( (short)Values[0] | (short)(Values[1] << 8) );
                short y =(short) ( (short)Values[2] | (short)(Values[3] << 8) );
                short z =(short) ( (short)Values[4] | (short)(Values[5] << 8) );
                
                int roll = Values[6] | (Values[7] << 8);
                float rollf = (roll << 16);
                int pitch = Values[8] | (Values[9] << 8);
                float pitchf = (pitch << 16);
                int yaw = Values[10] | (Values[11] << 8);
                float yawf = (yaw << 16);
                
                rollf = rollf / (1 << 29);
                pitchf = pitchf / (1 << 29);
                yawf = yawf / (1 << 29);

              	//BluetoothLEHardwareInterface.Log(string.Format("X:{0} ,Y:{1} , Z:{2} , r:{3} ,p:{4} ,y:{5}  ",x,y,z,rollf,pitchf,yawf));
				//Debug.Log("( " + rollf + " , " + pitchf + " , " + yawf + " )" );

				if(connectedSensors.Count > 0) 
				{
	                //change active Sensor
					//Debug.Log("Active Sensor Id[" + getSensorName(parts[3]) + "]: " + getSensorID(getSensorName(parts[3])) );
	                setActiveSensor(getSensorID(getSensorName(parts[3])));
	                connectedSensors[activeSensor].Pose6D_X=x;
					connectedSensors[activeSensor].Pose6D_Y=y;
					connectedSensors[activeSensor].Pose6D_Z=z;
					connectedSensors[activeSensor].Pose6D_Roll=rollf;
					connectedSensors[activeSensor].Pose6D_Pitch=pitchf;
					connectedSensors[activeSensor].Pose6D_Yaw=yawf;
				}
				else
				{
					//Debug.Log("NO Connected Sensors " + ownerIdx);
				}
            }
			else if (parts[1]=="00000206-0000-1000-8000-A0E5E9000000") //POS 2D
            {
				byte[] Values =System.Convert.FromBase64String(parts[2]);// GetBytes(parts[2]);
                connectedSensors[activeSensor].Pose2D_X=BitConverter.ToInt16(Values,0);
                connectedSensors[activeSensor].Pose2D_Y=BitConverter.ToInt16(Values,2);
            }
			else if (parts[1]=="00000208-0000-1000-8000-A0E5E9000000") //Gesture
            {
				byte[] Values =System.Convert.FromBase64String(parts[2]);// GetBytes(parts[2]);
                connectedSensors[activeSensor].Gesture_Scroll=BitConverter.ToInt16(Values,0);
                connectedSensors[activeSensor].Gesture_Direction=BitConverter.ToInt16(Values,2);
            }
			else if (parts[1]=="00000207-0000-1000-8000-A0E5E9000000") //Button
            {
				Debug.Log("received button data " + parts[2]);

				setActiveSensor(getSensorID(getSensorName(parts[3])));

	            //    BluetoothLEHardwareInterface.Log("Button State: "+parts[2]);
                connectedSensors[activeSensor].buttonState = parts[2];
                
            }
			else if (parts[1]=="00000209-0000-1000-8000-A0E5E9000000") //Motion
            {
            	//BluetoothLEHardwareInterface.Log("Motion: "+parts[2]);
            	byte[] Values =System.Convert.FromBase64String(parts[2]);// GetBytes(parts[2]);
          		//BluetoothLEHardwareInterface.Log(string.Format("X1:{0} ,Y1:{1} , Z1:{2} , X2:{3} ,Y2:{4} ,Z2:{5}  ",BitConverter.ToInt16(Values,0),BitConverter.ToInt16(Values,2),BitConverter.ToInt16(Values,4),BitConverter.ToInt16(Values,6),BitConverter.ToInt16(Values,8),BitConverter.ToInt16(Values,10)));
                
                connectedSensors[activeSensor].Motion_X1=BitConverter.ToInt16(Values,0);
                connectedSensors[activeSensor].Motion_Y1=BitConverter.ToInt16(Values,2);
                connectedSensors[activeSensor].Motion_Z1=BitConverter.ToInt16(Values,4);
                connectedSensors[activeSensor].Motion_X2=BitConverter.ToInt16(Values,6);
                connectedSensors[activeSensor].Motion_Y2=BitConverter.ToInt16(Values,8);
                connectedSensors[activeSensor].Motion_Z2=BitConverter.ToInt16(Values,10);
                
            }
            else 
			{ 
				//only print for non-data messages
            	for (int i = 0; i < parts.Length; ++i)
					BluetoothLEHardwareInterface.Log(string.Format ("Part: {0} - {1}", i, parts[i]));
            }
            
			if (message.Length >= deviceInitializedString.Length && message.Substring (0, deviceInitializedString.Length) == deviceInitializedString)
			{
				Initialized = true;

				if (InitializedAction != null)
					InitializedAction ();
			}
			else if (message.Length >= deviceDeInitializedString.Length && message.Substring (0, deviceDeInitializedString.Length) == deviceDeInitializedString)
			{
				BluetoothLEHardwareInterface.FinishDeInitialize ();
				Initialized = false;
				
				if (DeinitializedAction != null)
					DeinitializedAction ();
			}
			else if (message.Length >= deviceErrorString.Length && message.Substring (0, deviceErrorString.Length) == deviceErrorString)
			{
				string error = "";

				if (parts.Length >= 2)
					error = parts[1];

				if (ErrorAction != null)
					ErrorAction (error);
			}
			else if (message.Length >= deviceServiceAdded.Length && message.Substring (0, deviceServiceAdded.Length) == deviceServiceAdded)
			{
				if (parts.Length >= 2)
				{
					if (ServiceAddedAction != null)
						ServiceAddedAction (parts[1]);
				}
			}
			else if (message.Length >= deviceStartedAdvertising.Length && message.Substring (0, deviceStartedAdvertising.Length) == deviceStartedAdvertising)
			{
				//BluetoothLEHardwareInterface.Log("Started Advertising");

				if (StartedAdvertisingAction != null)
					StartedAdvertisingAction ();
			}
			else if (message.Length >= deviceStoppedAdvertising.Length && message.Substring (0, deviceStoppedAdvertising.Length) == deviceStoppedAdvertising)
			{
			//	BluetoothLEHardwareInterface.Log("Stopped Advertising");

				if (StoppedAdvertisingAction != null)
					StoppedAdvertisingAction ();
			}
			else if (message.Length >= deviceDiscoveredPeripheral.Length && message.Substring (0, deviceDiscoveredPeripheral.Length) == deviceDiscoveredPeripheral)
			{
				if (parts.Length >= 3)
				{
					if (!DiscoveredDeviceList.Contains (parts[1]))
					{
						DiscoveredDeviceList.Add (parts[1]);
                       
                        
						if (DiscoveredPeripheralAction != null)
							DiscoveredPeripheralAction (parts[1], parts[2]);
					}
				}
			}
			else if (message.Length >= deviceRetrievedConnectedPeripheral.Length && message.Substring (0, deviceRetrievedConnectedPeripheral.Length) == deviceRetrievedConnectedPeripheral)
			{
				if (parts.Length >= 3)
				{
					DiscoveredDeviceList.Add (parts[1]);
					 connectedSensors.Add(new SensorData());
                    
                    //add the sensor name , identifier to the dictionary
                    //Debug.Log("adding (identifier , name) to the sensorIdentifiers , ("+parts[1]+","+parts[2]+")");
                    sensorIdentifiers.Add(parts[1],parts[2]);
                    
					if (RetrievedConnectedPeripheralAction != null)
                    {
                        
                        
                        //continue to regular pairing
						RetrievedConnectedPeripheralAction (parts[1], parts[2]);
                    }
				}
			}
			else if (message.Length >= deviceConnectedPeripheral.Length && message.Substring (0, deviceConnectedPeripheral.Length) == deviceConnectedPeripheral)
			{
				if (parts.Length >= 2 && ConnectedPeripheralAction != null)
					ConnectedPeripheralAction (parts[1]);
			}
			else if (message.Length >= deviceDisconnectedPeripheral.Length && message.Substring (0, deviceDisconnectedPeripheral.Length) == deviceDisconnectedPeripheral)
			{
				if (parts.Length >= 2 && DisconnectedPeripheralAction != null)
					DisconnectedPeripheralAction (parts[1]);
			}
			else if (message.Length >= deviceDiscoveredService.Length && message.Substring (0, deviceDiscoveredService.Length) == deviceDiscoveredService)
			{
				if (parts.Length >= 3 && DiscoveredServiceAction != null)
					DiscoveredServiceAction (parts[1], parts[2]);
			}
			else if (message.Length >= deviceDiscoveredCharacteristic.Length && message.Substring (0, deviceDiscoveredCharacteristic.Length) == deviceDiscoveredCharacteristic)
			{
				if (parts.Length >= 4 && DiscoveredCharacteristicAction != null)
					DiscoveredCharacteristicAction (parts[1], parts[2], parts[3]);
			}
			else if (message.Length >= deviceDidWriteCharacteristic.Length && message.Substring (0, deviceDidWriteCharacteristic.Length) == deviceDidWriteCharacteristic)
			{
				if (parts.Length >= 2 && DidWriteCharacteristicAction != null)
					DidWriteCharacteristicAction (parts[1]);
			}
			else if (message.Length >= deviceDidUpdateNotificationStateForCharacteristic.Length && message.Substring (0, deviceDidUpdateNotificationStateForCharacteristic.Length) == deviceDidUpdateNotificationStateForCharacteristic)
			{
				if (parts.Length >= 2 && DidUpdateNotifiationStateForCharacteristicAction != null)
					DidUpdateNotifiationStateForCharacteristicAction (parts[1]);
			}
			else if (message.Length >= deviceDidUpdateValueForCharacteristic.Length && message.Substring (0, deviceDidUpdateValueForCharacteristic.Length) == deviceDidUpdateValueForCharacteristic)
			{
				if (parts.Length >= 3 && DidUpdateCharacteristicValueAction != null)
				{
                   	OnBluetoothData (parts[1], parts[2]);
				}
			}
		}
	}

	public void OnBluetoothData (string base64Data)
	{
		OnBluetoothData ("", base64Data);
	}

	public void OnBluetoothData (string characteristic, string base64Data)
	{
		if (base64Data != null)
		{
          
            byte[] bytes = System.Convert.FromBase64String(base64Data);
			if (bytes.Length > 0)
			{
				//BluetoothLEHardwareInterface.Log("Characteristic Received: " + characteristic);

				string byteString = "";
				foreach (byte b in bytes)
					byteString += string.Format("{0:X2}", b);

				//BluetoothLEHardwareInterface.Log(byteString);

				if (DidUpdateCharacteristicValueAction != null)
					DidUpdateCharacteristicValueAction (characteristic, bytes);
			}
		}
	}
}
