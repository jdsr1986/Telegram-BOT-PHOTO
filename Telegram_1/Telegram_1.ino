int Boton = 34;
int Laser = 19;

void setup() {
  Serial.begin(9600);
  pinMode(Boton, INPUT_PULLUP);
  pinMode(Laser, OUTPUT);
}

void loop() {
  if (digitalRead(Boton) == 0) {
    Serial.println("H");
      delay(500);
      }

  if (Serial.available()) {
    char Letra = Serial.read();
    if (Letra == 'H') {
      digitalWrite(Laser, HIGH);
    }
    else if (Letra == 'L') {
      digitalWrite(Laser, LOW);
    }
  }

}
