#define BEEPER_PIN 9

#define MIN_TONE 500
#define MAX_TONE 700
#define STEP 1

void setup() {
  // put your setup code here, to run once:
  int k = MIN_TONE;
  int DIR = 1;
  pinMode(BEEPER_PIN, OUTPUT);
  for (int n = 0; n < 2; /* nothing */)
  {
      tone(BEEPER_PIN, k);
      delay(10);
      k = k + (STEP * DIR);
      if (k > MAX_TONE)
        DIR = -1;
      else if (k < MIN_TONE)
      {
        DIR = 1;
        n++;
      }
  }
  noTone(BEEPER_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
}
