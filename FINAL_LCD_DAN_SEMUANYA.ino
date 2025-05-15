#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int moisturePin = 34; 
const int relayPin    = 26; 
const int threshold   = 3000; 


void setup() {
  
  Serial.begin(115200);

  lcd.init();        
  lcd.backlight();   

  
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); 
}

void loop() {
  
  int moistureValue = analogRead(moisturePin);
  
  
  lcd.setCursor(0, 0);          
  lcd.print("Kelembapan: ");    
  lcd.print(moistureValue);     
  lcd.print("   ");             
  
  
  if (moistureValue >= threshold) {
    
    digitalWrite(relayPin, LOW);   
    lcd.setCursor(0, 1);           
    lcd.print("Pompa: ON ");       
  } 
  else {
    
    digitalWrite(relayPin, HIGH);  
    lcd.setCursor(0, 1);
    lcd.print("Pompa: OFF");       
  }

  delay(1000);
}
