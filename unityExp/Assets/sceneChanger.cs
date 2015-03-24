using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.IO;


 

public class sceneChanger : MonoBehaviour
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
    
	public void loadScene(string name)
    {
        
         Application.LoadLevel(name);
    }
    
 }
