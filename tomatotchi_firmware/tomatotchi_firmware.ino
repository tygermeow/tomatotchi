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
  
  Serial.print(String(temp));
  
  
  delay(1000);
}
