#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27, 16,2); //or 0x3F


void setup() {

  LCD.init();
  LCD.backlight();

  LCD.setCursor(5,0);            //16x2 start 0 to 15 !
  LCD.print("HAPPY");
  LCD.setCursor(8,1);
  LCD.print("EID !");

}

void loop() {
  // put your main code here, to run repeatedly:

}
