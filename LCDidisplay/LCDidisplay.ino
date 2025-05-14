#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
lcd.begin (16, 2);
}

void loop()
{
lcd.clear();
lcd.setCursor(0,0);
lcd.print("NAME: ABDULMENAN SEMAN");
delay(1000);
lcd.setCursor(0,1);
lcd.print("ID: UGR/68130/14");
delay(1000);
lcd.clear();
delay(500);
}