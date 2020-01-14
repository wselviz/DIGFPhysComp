  int ledPin = 9;
void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

 

  // Pin 9 Fade In
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 35) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 70 milliseconds
    delay(70);
  }
      // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 35) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
    

//Pin 8 Light Random Value
    digitalWrite(8, HIGH);
    delay(random(0,100));
    digitalWrite(8, LOW);
    delay(random(0,100));

    
//Pin 13 Light ON/OFF
    digitalWrite(13, HIGH);
    delay(random(0,100));
    digitalWrite(13, LOW);
    delay(random(0,100));


  }
