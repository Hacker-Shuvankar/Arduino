/*
   -- Home automation final --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Debjitroxx"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377
#define REMOTEXY_ACCESS_PASSWORD "arduino"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 298 bytes
  { 255,9,0,0,0,35,1,16,24,1,2,0,42,11,13,5,2,26,31,31,
  79,78,0,79,70,70,0,4,192,25,77,36,5,120,0,4,192,25,85,36,
  5,120,0,4,192,25,93,36,5,120,0,4,192,25,69,36,5,120,0,2,
  0,42,48,13,5,2,26,31,31,79,78,0,79,70,70,0,2,0,42,30,
  13,5,2,26,31,31,79,78,0,79,70,70,0,2,0,42,39,13,5,2,
  26,31,31,79,78,0,79,70,70,0,2,0,42,20,13,5,2,26,31,31,
  79,78,0,79,70,70,0,129,0,4,49,14,3,2,66,97,116,104,114,111,
  111,109,0,129,0,4,12,13,3,2,66,101,100,114,111,111,109,0,129,0,
  4,30,9,3,2,68,105,110,105,110,103,0,129,0,4,40,11,3,2,75,
  105,116,99,104,101,110,0,129,0,4,21,16,3,2,66,101,100,114,111,111,
  109,32,50,0,129,0,26,3,12,4,2,76,105,103,104,116,115,0,129,0,
  27,60,9,4,121,70,97,110,115,0,130,1,244,56,78,1,26,129,0,4,
  70,13,3,121,66,101,100,114,111,111,109,0,129,0,4,78,16,3,121,66,
  101,100,114,111,111,109,32,50,0,129,0,4,86,9,3,121,68,105,110,105,
  110,103,0,129,0,4,94,11,3,121,75,105,116,99,104,101,110,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
  int8_t slider_2; // =0..100 slider position 
  int8_t slider_3; // =0..100 slider position 
  int8_t slider_4; // =0..100 slider position 
  int8_t slider_1; // =0..100 slider position 
  uint8_t switch_5; // =1 if switch ON and =0 if OFF 
  uint8_t switch_3; // =1 if switch ON and =0 if OFF 
  uint8_t switch_4; // =1 if switch ON and =0 if OFF 
  uint8_t switch_2; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)


#define PIN_SWITCH_1 2
#define PIN_SWITCH_5 12
#define PIN_SWITCH_3 7
#define PIN_SWITCH_4 8
#define PIN_SWITCH_2 4



void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_1, OUTPUT);
  pinMode (PIN_SWITCH_5, OUTPUT);
  pinMode (PIN_SWITCH_3, OUTPUT);
  pinMode (PIN_SWITCH_4, OUTPUT);
  pinMode (PIN_SWITCH_2, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_SWITCH_1, (RemoteXY.switch_1==0)?HIGH:LOW);
  digitalWrite(PIN_SWITCH_5, (RemoteXY.switch_5==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_3, (RemoteXY.switch_3==0)?HIGH:LOW);
  digitalWrite(PIN_SWITCH_4, (RemoteXY.switch_4==0)?HIGH:LOW);
  digitalWrite(PIN_SWITCH_2, (RemoteXY.switch_2==0)?HIGH:LOW);

  int MotorSpeed1 = RemoteXY.slider_1 * 2.4 ;
    analogWrite(3,MotorSpeed1);
  
  int MotorSpeed2 = RemoteXY.slider_2 * 2.4 ;
    analogWrite(5,MotorSpeed2);
  
  int MotorSpeed3 = RemoteXY.slider_3 * 2.4 ;
    analogWrite(6,MotorSpeed3);

  int MotorSpeed4 = RemoteXY.slider_4 * 2.4 ;
    analogWrite(9,MotorSpeed4);


}