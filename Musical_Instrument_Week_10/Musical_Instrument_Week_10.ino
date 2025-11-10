// Simple Piano

const int buzzerPin = 8;
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int potPin = A0;

int notes[] = {262, 294, 330}; // C, D, E
String noteNames[] = {"C", "D", "E"};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Simple Piano Ready!");
}

void loop() {
  int potValue = analogRead(potPin);
  float octaveMultiplier = map(potValue, 0, 1023, 50, 200) / 100.0;
  
  if (digitalRead(button1) == LOW) {
    int freq = notes[0] * octaveMultiplier;
    tone(buzzerPin, freq);
    Serial.print("Playing ");
    Serial.print(noteNames[0]);
    Serial.print(" at ");
    Serial.print(freq);
    Serial.println(" Hz");
  }
  else if (digitalRead(button2) == LOW) {
    int freq = notes[1] * octaveMultiplier;
    tone(buzzerPin, freq);
    Serial.print("Playing ");
    Serial.print(noteNames[1]);
    Serial.print(" at ");
    Serial.print(freq);
    Serial.println(" Hz");
  }
  else if (digitalRead(button3) == LOW) {
    int freq = notes[2] * octaveMultiplier;
    tone(buzzerPin, freq);
    Serial.print("Playing ");
    Serial.print(noteNames[2]);
    Serial.print(" at ");
    Serial.print(freq);
    Serial.println(" Hz");
  }
  else {
    noTone(buzzerPin);
  }
  
  delay(10);
}