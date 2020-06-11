#include <Wire.h>
#include <TimeLib.h>
#include <DS1307RTC.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  tmElements_t tm;
  if (RTC.read(tm)) {
    lcd.setCursor(0, 0);
    
    lcd.print("Time: ");
    if (tm.Hour < 10)
      lcd.print('0');
    lcd.print(tm.Hour);
    
    lcd.print(':');
    if (tm.Minute < 10)
      lcd.print('0');
    lcd.print(tm.Minute);
    
    lcd.print(':');
    if (tm.Second < 10)
      lcd.print('0');
    lcd.print(tm.Second);

    lcd.setCursor(0, 1);

    lcd.print("Date: ");
    if (tm.Day < 10)
      lcd.print('0');
    lcd.print(tm.Day);
    
    lcd.print('/');
    if (tm.Month < 10)
      lcd.print('0');
    lcd.print(tm.Month);
    
    lcd.print('/');
    lcd.print(tmYearToCalendar(tm.Year)); 
  }else if(RTC.chipPresent()){
    lcd.clear();
    lcd.print("Error! PLEB!!!");
    delay(1000 );
  }
    
}
