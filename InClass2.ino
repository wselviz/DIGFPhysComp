void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(analogRead(5));
  if (analogRead(5) > 700) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
