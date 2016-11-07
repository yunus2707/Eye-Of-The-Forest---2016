/*Eye Of The Forest : Forest Fire Monitoring System 
 Monitoring forest fire and the possibility of forest fire
 using IOT system with GSM method and HTTP Protocol.
Consist : DHT11, UVTron, and GSM Sim900a
- Computer Enginnering 
- Universitas Indonesia
Team : 
 Yunus Maulana
 Aulya Khatulistivani
 Destian Sanyoto
PINS :
-LCD:
D4 : PIN 4
D5 : PIN 5
D6 : PIN 6
D7 : PIN 7
RS : PIN 8
EN : PIN 9
R/W : GND
-DHT11 :

*/

#include <LiquidCrystal.h>
#include <dht11.h>
#include <stdio.h>

#define DHT11PIN 2

LiquidCrystal lcd(8,9,4,5,6,7);

dht11 DHT11;
char lcdp[16];

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Boot Up");
  delay(2000);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity (%): ");
  sprintf(lcdp,"%d",DHT11.humidity);
  lcd.print(lcdp);

  lcd.setCursor(0,1);
  lcd.print("Temperature (°C): ");
  sprintf(lcdp,"%d",DHT11.temperature);
  lcd.print(lcdp);

  delay(1000);
}
