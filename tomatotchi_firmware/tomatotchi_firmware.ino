#include "music.h"
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
  //sing the tunes
  sing(1);
  sing(1);
  sing(2);
}
