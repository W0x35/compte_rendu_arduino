const int ledPin =  4;      //Le numéro du PIN

void setup() {
  // Initialisé le PIN
  pinMode(ledPin, OUTPUT);
}

// Boucle qui tourne indéfiniment 
void loop() {
  digitalWrite(ledPin, HIGH);   //Allumer la LED
  delay(300);                       // Attent 300ms
  digitalWrite(ledPin, LOW);    // Eteint la LED
  delay(700);                       // Attend 700ms 
}
