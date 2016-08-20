#include "music.h"
#include "temp.h"
#include <Wire.h>


void setup(void)
{
  Wire.begin();  //for thermometer
  Serial.begin(9600);
  pinMode(3, OUTPUT);  //buzzer
  pinMode(13, OUTPUT);  //led indicator when singing a note

}
void loop()
{
  float temp = gettemp();
  int light = 100 - map(analogRead(A0),0,1023,10,99);
  int moisture = 100 - map(analogRead(A1),0,1023,10,99);
  Serial.print(String(temp));
  Serial.print(light);
  Serial.print(moisture);
  if(temp > 60 && temp < 80 && light > 80 && light < 95 && moisture < 95 && moisture > 70) sing(1);
  else sing(2);
  
  
  delay(20000);
}
