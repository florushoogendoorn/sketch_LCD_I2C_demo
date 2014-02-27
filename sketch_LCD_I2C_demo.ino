#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

void setup() 
{
  Serial.begin(9600);  

  lcd.begin(16,2);  
  
}


void loop()  
{
  
  lcd.setCursor(1,0);
  lcd.print("Demonstratie:"); 
  delay(3500);
  lcd.clear();
  
  lcd.setCursor(1,0);
  lcd.print("I2C interface"); 
  lcd.setCursor(0,1);
  lcd.print("16x2 / 20x4 LCD");   
  delay(9000);  
  
  for(int i = 0; i< 5; i++)
  {
    lcd.backlight();
    delay(750);
    
    lcd.noBacklight();
    delay(750);
  }
  lcd.backlight(); 

  delay(2750);
  lcd.clear();
  
  lcd.setCursor(1,0); 
  lcd.print("Bits & Parts");
  delay(3000);
  
  lcd.setCursor(0,1);
  lcd.print("bitsandparts.eu");                               
  delay(5000);  
  lcd.clear();
  
}


