#include<ESP8266WiFi.h>
void setup()
f
Serial.begin(115200);
WiFi.mode(WIFI STA);
WiFi.disconnect();
delay(100);
Serial.println(“Setup done”);
{
void loop()
{
int n=WiFi.scanNetworks();
if(n==0)
Serial.println(“No networks found”);
else
}
for(int i=0;i<n;++i)
{
if((String)WiFi.SSID)(i)!=“NodeMCU01”)
{continue;}
Serial.print(WiFi.RSSI(i));
Serial.print(“,”);
}
}
}