/*
  LiquidCrystal Library - Display Name and ID

  This sketch prints a name and an ID to the LCD.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 This example code is in the public domain.
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the Arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print name on the first line
  lcd.print("Name: FISEHA BIRHANU");
  
  // Set cursor to the second line for ID display
  lcd.setCursor(0, 1);
  
  // Print ID on the second line
  lcd.print("ID: 69338");
}

void loop() {
  // No need for a loop in this case; we can keep it static.
}
