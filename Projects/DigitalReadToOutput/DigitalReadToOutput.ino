#define InputPin 7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(InputPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue = digitalRead(InputPin);
  Serial.print("pinValue: ");
  Serial.println(readValue);
  digitalWrite(LED_BUILTIN, readValue);
}
