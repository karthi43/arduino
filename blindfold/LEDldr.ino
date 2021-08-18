#include<Wire.h>
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight(); 
  pinMode(13,OUTPUT);
  
}
void loop(){
  //int sernsorPin = A0;
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  lcd.setCursor(0,0);
  lcd.print(sensorValue1);
  lcd.setCursor(1,1);
  lcd.print(sensorValue2);
 lcd.print(A0);
  delay(400);
  lcd.clear();
  if(sensorValue1 <= 20 && sensorValue1 < 400 ){
    lcd.setCursor(10,0);
    lcd.print("*A*");
    
  }
  else if(sensorValue1 <= 400  && sensorValue2 < 10 ){
    lcd.setCursor(10,0);
    lcd.print("*B*");
  }
  else (sensorValue1 <= 20  && sensorValue2 < 20);
   lcd.setCursor(10,1);
  lcd.print("f*");
}
 
