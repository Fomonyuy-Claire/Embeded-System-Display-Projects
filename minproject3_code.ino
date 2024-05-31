const int ledPin=2;

void setup() {
  // put your setup code here, to run once:
     pinMode(ledPin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite (ledPin, OUTPUT);
     delay (1000);
    digitalWrite (ledPin, LOW);
    delay (1000);
}

