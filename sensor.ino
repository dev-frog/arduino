#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("    COUNTER");
  delay(100);

  int a=0;
  lcd.setCursor(0,1);
  lcd.print("       ");
  lcd.print(a);
    while(a<=100){
      a=a+1;
      delay(1000);
      lcd.setCursor(0,1);
      lcd.print("       ");
      lcd.print(a);
    }
}


void loop(){
  lcd.clear();
}