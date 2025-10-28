void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(A2,INPUT_PULLUP);

}

void loop() {
  int buttonState = digitalRead(A2);

  if(buttonState == LOW){         // button pressed
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}


