#include <LiquidCrystal.h>
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
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