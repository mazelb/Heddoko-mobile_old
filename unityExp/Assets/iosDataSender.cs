using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.IO;




public class iosDataSender : MonoBehaviour
{

void Start ()
{
    
}

// Update is called once per frame
void Update ()
{
}

void OnGUI()
{
}


#if UNITY_IPHONE
[DllImport ("__Internal")]
private static extern void _iOSUnityMovementDataTestString (string message);

[DllImport ("__Internal")]
    private static extern void _iOSUnityMovementDataSendData (string  movementId, float [] rawData , int dataSize, int frames, int devices);
#endif


public void sendStringToIOS(string message)
{
#if UNITY_IPHONE
_iOSUnityMovementDataTestString (message);
#endif
}

    
public void sendMovementData(string movementID
	                             ,float [] rawData , int dataSize, int numberOfFrames,int numberOfSensors)
    {
#if UNITY_IPHONE
		_iOSUnityMovementDataSendData (movementID,rawData,dataSize,numberOfFrames,numberOfSensors);
#endif
    }
 
    
}
