#include <LiquidCrystal.h>
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(rs,OUTPUT);
  pinMode(en,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(d5,OUTPUT);
  pinMode(d6,OUTPUT);
  pinMode(d7,OUTPUT);
  
}
void loop() {
  digitalWrite(rs,HIGH);
  digitalWrite(en,HIGH);
  digitalWrite(d4,HIGH);
  digitalWrite(d5,HIGH);
  digitalWrite(d6,HIGH);
  digitalWrite(d7,HIGH);

  delay(1000);
  
}
