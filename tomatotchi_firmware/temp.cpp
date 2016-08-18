#include "temp.h"
#include <Wire.h>
#define ADDRESS 72

float gettemp(){
  Wire.beginTransmission(ADDRESS);
  Wire.write(0);
  Wire.endTransmission();
  Wire.requestFrom(ADDRESS,1);
  while(Wire.available() == 0);
  float temp = Wire.read();
  float ftemp = (float)(temp*9/5) + 32;
  return ftemp;
}
