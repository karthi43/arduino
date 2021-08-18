#include<Wire.h>
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27,16,2);

 void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight(); 
  //pinMode(13,OUTPUT);
  
}
void loop(){
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);
  int sensorValue6 = analogRead(A5);
  delay(800);
   //Serial.println(sensorValue1);
   //Serial.println(sensorValue2);Serial.println(sensorValue3);Serial.println( sensorValue4);Serial.println(sensorValue5);Serial.println(sensorValue6);
 lcd.clear();
  lcd.setCursor(0,0);  //uncomment to display analog out of A0 LDR
  lcd.print("Braille to ");
  
 
  lcd.setCursor(0,1); // uncomment to display analog out of A1 LDR
 lcd.print("ALphabets:");
 
  delay(200);
 
  
  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 < 999 && sensorValue4 < 999 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("A");
    Serial.println("A");
    
  }
  else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 < 999 && sensorValue4 < 999 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("B");
     Serial.println("B");
  }
 else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("C");
     Serial.println("C");
}else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("D");
    Serial.println("D");
}else if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 < 999 && sensorValue4 < 999 && sensorValue5 >= 1010 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("E");
     Serial.println("E");
}
 else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("F");
    Serial.println("F");
}
 else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 >= 1010  && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("G");
    Serial.println("G");
}
 else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 < 999 && sensorValue4 < 999 && sensorValue5 >= 1010 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("H");
    Serial.println("H");
}
 else  if(sensorValue1 < 999 && sensorValue2 >= 1010  && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 < 999  && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("I");
    Serial.println("I");
} else  if(sensorValue1 < 999 && sensorValue2 >= 1010  && sensorValue3 < 999 && sensorValue4 >= 1010  && sensorValue5 >= 1010  && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("J");
    Serial.println("J");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010  && sensorValue4 < 999 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("K");
    Serial.println("K");
}
 else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010  && sensorValue3 >= 1010  && sensorValue4 < 999 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("L");
    Serial.println("L");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010  && sensorValue4 >= 1010  && sensorValue5 < 999 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("M");
    Serial.println("M");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("N");
    Serial.println("N");
}
     else  if(sensorValue1>= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 < 999 && sensorValue5 >= 1010 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("O");
    Serial.println("O");
} else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4>= 1010 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("P");
    Serial.println("P");
} else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("Q");
    Serial.println("Q");
} else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4 < 999 && sensorValue5 >= 1010 && sensorValue6 < 999 ){
    lcd.setCursor(12,0);
    lcd.print("R");
    Serial.println("R");
} else  if(sensorValue1 < 999 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 < 999 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("S");
    Serial.println("S");
} else  if(sensorValue1 < 999 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 < 999  ){
    lcd.setCursor(12,0);
    lcd.print("T");
    Serial.println("T");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 < 999 && sensorValue5 < 999 && sensorValue6 >= 1010 ){
    lcd.setCursor(12,0);
    lcd.print("U");
    Serial.println("U");
} else  if(sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3 >= 1010 && sensorValue4 < 999&& sensorValue5 < 999 && sensorValue6 >= 1010  ){
    lcd.setCursor(12,0);
    lcd.print("V");
    Serial.println("V");
} else  if(sensorValue1 < 999 && sensorValue2 >= 1010 && sensorValue3 < 999 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 >= 1010  ){
    lcd.setCursor(12,0);
    lcd.print("W");
    Serial.println("W");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 < 999 && sensorValue6 >= 1010  ){
    lcd.setCursor(12,0);
    
    lcd.print("X");
    Serial.println("X");
} else  if(sensorValue1 >= 1010 && sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 >= 1010 ){
    lcd.setCursor(12,0);
    lcd.print("Y");
    Serial.println("Y");
} else  if(sensorValue1 >= 1010&& sensorValue2 < 999 && sensorValue3 >= 1010 && sensorValue4 < 999 && sensorValue5 >= 1010 && sensorValue6 >= 1010  ){
    lcd.setCursor(12,0);
    lcd.print("Z");
    Serial.println("Z");
} else  (sensorValue1 >= 1010 && sensorValue2 >= 1010 && sensorValue3>= 1010 && sensorValue4 >= 1010 && sensorValue5 >= 1010 && sensorValue6 >= 1010  ) ;
   delay(100);
}
 
