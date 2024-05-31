const int gR1=1, yR1=2, rR1=3;
const int gR2=4, yR2=5, rR2=6;
const int gR3=7, yR3=8, rR3=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(gR1, OUTPUT);
  pinMode(yR1, OUTPUT);
  pinMode(rR1, OUTPUT);

  pinMode(gR2, OUTPUT);
  pinMode(yR2, OUTPUT);
  pinMode(rR2, OUTPUT);

  pinMode(gR3, OUTPUT);
  pinMode(yR3, OUTPUT);
  pinMode(rR3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  S1();
  delay (5000);
  S2();
  delay (1000);
  S3();
  delay (5000);
  S4();
  delay (1000);
  S5();
  delay (5000);
  S6();
  delay (1000);

}
void S1 (){
    digitalWrite (gR1, HIGH);
    digitalWrite (yR1, LOW);
    digitalWrite (rR1, LOW);

    digitalWrite (gR2, LOW);
    digitalWrite (yR2, LOW);
    digitalWrite (rR2, HIGH);

    digitalWrite (gR3, LOW);
    digitalWrite (yR3, LOW);
    digitalWrite (rR3, HIGH);

  }

void S2() {
    digitalWrite (gR1, HIGH);
    digitalWrite (yR1, HIGH);
    digitalWrite (rR1, LOW);

    digitalWrite (gR2, LOW);
    digitalWrite (yR2, HIGH);
    digitalWrite (rR2, HIGH);

    digitalWrite (gR3, LOW);
    digitalWrite (yR3, LOW);
    digitalWrite (rR3, HIGH);
  
}
void S3() {
   digitalWrite (gR1, LOW);
    digitalWrite (yR1, LOW);
    digitalWrite (rR1, HIGH);

    digitalWrite (gR2, HIGH);
    digitalWrite (yR2, LOW);
    digitalWrite (rR2, LOW);

    digitalWrite (gR3, LOW);
    digitalWrite (yR3, LOW);
    digitalWrite (rR3, HIGH);

}
void S4 () {
    digitalWrite (gR1, LOW);
    digitalWrite (yR1, LOW);
    digitalWrite (rR1, HIGH);

    digitalWrite (gR2, HIGH);
    digitalWrite (yR2, HIGH);
    digitalWrite (rR2, LOW);

    digitalWrite (gR3, LOW);
    digitalWrite (yR3, HIGH);
    digitalWrite (rR3, HIGH);

}
void S5 () {
    digitalWrite (gR1, LOW);
    digitalWrite (yR1, LOW);
    digitalWrite (rR1, HIGH);

    digitalWrite (gR2, LOW);
    digitalWrite (yR2, LOW);
    digitalWrite (rR2, HIGH);

    digitalWrite (gR3, HIGH);
    digitalWrite (yR3, LOW);
    digitalWrite (rR3, LOW);

}
void S6 () {
  digitalWrite (gR1, LOW);
    digitalWrite (yR1, HIGH);
    digitalWrite (rR1, HIGH);

    digitalWrite (gR2, LOW);
    digitalWrite (yR2, LOW);
    digitalWrite (rR2, HIGH);

    digitalWrite (gR3, HIGH);
    digitalWrite (yR3, HIGH);
    digitalWrite (rR3, LOW);
}



