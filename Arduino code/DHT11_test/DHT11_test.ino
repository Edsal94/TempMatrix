#include "DHT.h"

#define DHTpin 2
#define DHTtype DHT11
DHT dht(DHTpin, DHTtype);


void setup() {
Serial.begin(9600);
Serial.println(F("DHTxx test!"));

dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print(" Humidity: ");
  Serial.print(h);
  Serial.print("%  Temperature: ");
  Serial.print(t);
  Serial.println("°C ");
  delay(1000);
}
