#include <Servo.h>

Servo srv1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  srv1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pos = random() % 181;
  srv1.write(pos);
  Serial.print(pos);
  Serial.println("º");
  delay(1000);
}
