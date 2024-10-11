// C++ code
//
#include <LiquidCrystal.h>

const int rs = 13,rw=12, en = 11,d0=10, d1=9, d2=8, d3=7, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, rw, en, d4, d5, d6, d7);

void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

  // Print a message to the LCD.

  lcd.print("olar amiguinhos!!!");
  delay(1000);
  lcd.clear();

}


void loop() {

  // set the cursor to column 0, line 1

  // (note: line 1 is the second row, since counting begins with 0):

  lcd.setCursor(0, 1);

  // print the number of seconds since reset:

  lcd.print("eu mim amo");
  lcd.clear();

}
