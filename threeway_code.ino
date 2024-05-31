const int gPin = 1;
const int yPin = 2;
const int rPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(gPin, OUTPUT);
  pinMode(yPin, OUTPUT);
  pinMode(rPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gPin, HIGH);
  digitalWrite(yPin, LOW);
  digitalWrite(rPin, LOW);
  delay(5000);
  digitalWrite(gPin, HIGH);
  digitalWrite(yPin, HIGH);
  digitalWrite(rPin, LOW);
  delay(2000);
  digitalWrite(gPin, LOW);
  digitalWrite(yPin, LOW);
  digitalWrite(rPin, HIGH);
  delay(5000);
  digitalWrite(gPin, LOW);
  digitalWrite(yPin, HIGH);
  digitalWrite(rPin, HIGH);
  delay(2000);

}
