#include "DHT.h"

DHT senzor(2, DHT22);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  senzor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("temp: ");
  Serial.print(senzor.readTemperature());
  Serial.print(" humidity: ");
  Serial.println(senzor.readHumidity());
  delay(500);
}
