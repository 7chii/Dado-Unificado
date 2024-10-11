#include <LiquidCrystal.h>
const int rs=12, rw=11, en=9, d4=7, d5=6, d6=5, d7=4;
LiquidCrystal lcd(rs, rw, en, d4,d5,d6,d7);
int var = 0;
void setup() {
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  pinMode(13, INPUT);
  lcd.begin(16,2);
  lcd.print(var);
}

void loop() {
int  butt1 = digitalRead(3);
 int  butt2 = digitalRead(2);
 int butt3 = digitalRead(13);
  if(butt1==HIGH){
       lcd.clear();
       var++;
       lcd.print(var);
       delay(150);
    }else if(butt2==HIGH){
        lcd.clear();
       var--;
       lcd.print(var);
       delay(150);
    }else if(butt3==HIGH){
       int rannum = random(var+1);
       if(rannum == 0){
        rannum++;}
        lcd.clear();
        lcd.print(rannum);
    }
  }
