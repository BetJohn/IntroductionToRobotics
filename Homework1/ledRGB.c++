int pinRed = 9;
int pinGreen = 10;
int pinBlue = 11;
const int interval = 1000;
int previousMillis = 0;
const int potentiometerMaxValue = 1023;
const int ledMaxValue = 255;
void setup() {
  Serial.begin(9600);
  pinMode(pinRed,OUTPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinBlue,OUTPUT);
}
int redResistence;
int greenResistence;
int blueResistence;
void loop() {
  int currentMillis = millis();
  if(currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    Serial.print("Red: ");
    Serial.println(redResistence);
    Serial.print("Green: ");
    Serial.println(greenResistence);
    Serial.print("Blue: ");
    Serial.println(blueResistence);
  }
  redResistence = analogRead(A0);
  greenResistence = analogRead(A1);
  blueResistence = analogRead(A2);

  unsigned int mappedRed = map(redResistence, 0, potentiometerMaxValue, 0, ledMaxValue);
  unsigned int mappedGreen = map(greenResistence, 0, potentiometerMaxValue, 0, ledMaxValue);
  unsigned int mappedBlue = map(blueResistence, 0, potentiometerMaxValue, 0, ledMaxValue);
  analogWrite(pinRed,mappedRed);
  analogWrite(pinGreen,mappedGreen);
  analogWrite(pinBlue,mappedBlue);
}
