int ledPin = 11;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // speed of data transfer
  pinMode(ledPin,OUTPUT );

}

void loop() {
  // put your main code here, to run repeatedly:
// to read sensor value and save it in sensorValure variable
int sensorValue = analogRead(A2);
sensorValue = constrain (sensorValue, 600, 900);
brightness = map(sensorValue,600,900,0,255); // mapping the sensor  range to 0 -255




analogWrite(ledPin,brightness);
Serial.println(sensorValue + " " + brightness);

delay(30);

}
