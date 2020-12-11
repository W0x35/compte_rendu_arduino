const int led = 2; // broche 3 pour la LED


void setup()
{
pinMode(led,OUTPUT); 
Serial.begin(9600); 
}
// cette fonction boucle indéfiniment

void loop()
{
int valeur = analogRead(A0); // lecture capteur sur entrée A0
Serial.println (valeur); // affichage valeur sur terminal série

  if ( valeur < 512 ) // détection d’une valeur particulière
       digitalWrite(led,LOW); // led éteinte
  else
      digitalWrite(led,HIGH); // led allumée
      delay(1000); // stabilisation 1s
}
