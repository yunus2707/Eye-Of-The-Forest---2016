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
#include "dht.h"

LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16,2);
  lcd.print("Boot Up");
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
