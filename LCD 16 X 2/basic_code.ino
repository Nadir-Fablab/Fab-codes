#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.init(); 
  //lcd.begin(16, 2);
lcd.backlight();
  // Clears the LCD screen
  //lcd.clear();
}

void loop() 
{
  // Print a message to the LCD.
  lcd.print(" Hello world!");

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // Print a message to the LCD.
  lcd.print(" LCD Tutorial");
}
