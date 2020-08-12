#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  lcd.begin(16,2);
  lcd.print(“Hello !”);
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}