#include "LedControl.h"
#define DIN 2
#define CS 3
#define CLK 4
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

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 6);
  lc.clearDisplay(0);

}

void loop() {
  delay(1000);
  happy_face();
  delay(3000);
  sad_face();
  delay(3000);

}
