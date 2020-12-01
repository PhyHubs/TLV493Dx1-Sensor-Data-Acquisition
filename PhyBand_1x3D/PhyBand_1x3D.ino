#include "Tlv493d.h"


// Tlv493d Opject
Tlv493d Tlv493dMagnetic3DSensor2 = Tlv493d();

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, HIGH);
  delay(500);
      
  Serial.begin(9600);
  while(!Serial);
    Tlv493dMagnetic3DSensor2.begin(0);
    //Tlv493dMagnetic3DSensor2.setAccessMode(4);
    delay(50);
}

void loop() {
  //digitalWrite(LED1, HIGH);
  //digitalWrite(LED1, LOW);

/****
  Tlv493dMagnetic3DSensor2.I2Cscan();
  Tlv493dMagnetic3DSensor2.setAccessMode(4);
  Wire.beginTransmission(0x1F);    // get the sensors attention 
  //Wire.write(0x05);    // move your memory pointer to registerAddress
  //Wire.endTransmission();           // completes the ‘move memory pointer’ transaction
  Wire.requestFrom(0x1F, 7); // send me the data from 1 registers
  Serial.println(Wire.read());             // byte from registerAddress
  
  //Wire.beginTransmission(0x1F);    // get the sensors attention 
  //Wire.write(0x07);    // move your memory pointer to registerAddress
  //Wire.endTransmission();           // completes the ‘move memory pointer’ transaction
  //Wire.requestFrom(0x1F, 1); // send me the data from 1 registers  
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(static_cast<float>(344-TLV493D_TEMP_OFFSET) * TLV493D_TEMP_MULT);
  
  Wire.beginTransmission(0x1F);    // get the sensors attention 
  Wire.write(0x00);    // move your memory pointer to registerAddress
  Wire.endTransmission();           // completes the ‘move memory pointer’ transaction
  Wire.requestFrom(0x1F, 4); // send me the data from 1 registers  
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress
  Serial.println(Wire.read());             // byte from registerAddress 
  Serial.println(Wire.read());             // byte from registerAddress 
  //delay(1000);
*/
  
  
  Tlv493dMagnetic3DSensor2.updateData();
  Serial.print(Tlv493dMagnetic3DSensor2.getX());
  Serial.print(" ");
  Serial.print(Tlv493dMagnetic3DSensor2.getY());
  Serial.print(" ");
  Serial.print(Tlv493dMagnetic3DSensor2.getZ());
  Serial.print(" ");
  Serial.print(Tlv493dMagnetic3DSensor2.getTemp());
  Serial.println(" ");
 
  delay(10);
}
