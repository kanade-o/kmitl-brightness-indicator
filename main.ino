int switchPin = 0;
int photoPin = A0;
int redPin = 10;
int greenPin = 13;
int bluePin = 11;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(photoPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int photo_value = analogRead(photoPin);
  int switchValue = digitalRead(0);
  if (switchValue == HIGH) {
    if (photo_value < 102) {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 0);
    } else if (photo_value < 198) {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 127);
      analogWrite(bluePin, 0);
    } else if (photo_value < 294) {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);
    } else if (photo_value < 390) {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);
    } else if (photo_value < 390) {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);
    } else if (photo_value < 486) {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 255);
    } else if (photo_value < 582) {
      analogWrite(redPin, 75);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 130);
    } else if (photo_value < 678) {
      analogWrite(redPin, 148);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 211);
    }
  } else {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }
}
