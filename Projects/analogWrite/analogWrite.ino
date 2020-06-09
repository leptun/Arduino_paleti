#define OUT_PIN 9

void setup() {
  // put your setup code here, to run once:
  pinMode(OUT_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <=255; i++)
  {
    analogWrite(OUT_PIN, i);
    delay(10);
  }
  for (int i = 255; i > 0; i--)
  {
    analogWrite(OUT_PIN, i);
    delay(10);
  }
}
