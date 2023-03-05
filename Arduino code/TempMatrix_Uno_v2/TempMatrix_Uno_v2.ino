#include "LedControl.h"
#include "DHT.h"

#define DIN 7
#define CS 6
#define CLK 5
#define Moduli 1 //Numero di moduli connessi, da passare poi come parametro
LedControl lc = LedControl(DIN, CLK, CS, Moduli);

void happy_face() {
  byte values[8] = {B00000000, B01100110, B01100110, B00000000, B00000000, B00100100, B00011000, B00000000};
  for (int row=0; row<8; row++){
    lc.setRow(0,row, values[row]);
  }
}

void sad_face() {
  byte values[8] = {B00000000, B01100110, B01100110, B00000000, B00000000, B00011000, B00100100, B00000000};
  for (int row=0; row<8; row++){
    lc.setRow(0,row, values[row]);
  }
}

#define DHTpin 2
#define DHTtype DHT11
DHT dht(DHTpin, DHTtype);


void setup() {
Serial.begin(9600);
lc.shutdown(0, false);
lc.setIntensity(0, 6);
lc.clearDisplay(0);

dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  Serial.println(t);
  if (t>22.0) {
    happy_face();
  }
  else {
    sad_face();
  }
  delay(5000);
}