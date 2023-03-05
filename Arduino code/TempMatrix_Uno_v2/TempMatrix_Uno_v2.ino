#include "LedControl.h"
#include "DHT.h"

#define DIN 7
#define CS 6
#define CLK 5
#define Moduli 1 //Numero di moduli connessi, da passare poi come parametro
LedControl lc = LedControl(DIN, CLK, CS, Moduli);

void happy_face() {
  //byte values[8] = {B00000000, B01100000, B01100100, B00000010, B00000010, B01100100, B01100000, B00000000};
  byte values[8] = {B00000000, B00000110, B00100110, B01000000, B01000000, B00100110, B00000110, B00000000};
  for (int row=0; row<8; row++){
    lc.setRow(0,row, values[row]);
  }
}

void happy_face_scroll() {
  //byte values[8] = {B00000000, B01100000, B01100100, B00000010, B00000010, B01100100, B01100000, B00000000};
  byte values[8] = {B00000000, B00000110, B00100110, B01000000, B01000000, B00100110, B00000110, B00000000};
  byte buf[8] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};

  for (int col=0; col<8; col++){
    for (int elem=0; elem<7; elem++){
      buf[elem] = buf[elem+1];
    }
    buf[7] = values[col];
    for (int row=0; row<8; row++){
      lc.setRow(0,row, buf[row]);
    }
    delay(200);
  }

  for (int col=0; col<8; col++){
    for (int elem=0; elem<7; elem++){
      buf[elem] = buf[elem+1];
    }
    buf[7] = B00000000;
    for (int row=0; row<8; row++){
    lc.setRow(0,row, buf[row]);
    }
  delay(200);
  }
}

void sad_face() {
  //byte values[8] = {B00000000, B01100000, B01100010, B00000100, B00000100, B01100010, B01100000, B00000000};
  byte values[8] = {B00000000, B00000110, B01000110, B00100000, B00100000, B01000110, B00000110, B00000000};
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
  if (t>20.0) {
    happy_face_scroll();
  }
  else {
    sad_face();
  }
  delay(5000);
}