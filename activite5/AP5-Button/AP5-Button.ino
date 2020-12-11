const int buttonPin = 2;     // Numéro du PIn du bouton
const int ledPin =  4;      // Numéro du PIN de la LED


int buttonState = 0;        // définis une variable à la valeur 0

void setup() {
  pinMode(ledPin, OUTPUT); //initialise le PIn
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin); Quand le boutton poussoir est appuyé la variable passe à 1
  if (buttonState == HIGH) {  //verifie si le bouton est à 1 ou 0
    digitalWrite(ledPin, HIGH); //si bouton = 1 alors allumer la leds
  } else {
    digitalWrite(ledPin, LOW); //sinon etiendre la led si le bouton n'est plus a la valeur 1
  }
}
