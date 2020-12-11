const int ledvert =  7;             //Indique les PIN
const int ledjaune =  6;
const int ledrouge =  5;
const int ledvert2 =  4;
const int ledjaune2 =  3;
const int ledrouge2 =  2;


void setup() {
                                    //Initialise les PIN
  pinMode(ledvert, OUTPUT);
  pinMode(ledjaune, OUTPUT);
  pinMode(ledrouge, OUTPUT);
  pinMode(ledvert2, OUTPUT);
  pinMode(ledjaune2, OUTPUT);
  pinMode(ledrouge2, OUTPUT);
}

void loop() {
  digitalWrite(ledvert, HIGH);      //Allumer la led verte 
  digitalWrite(ledrouge2, HIGH);    //Allumer la led rouge2
  delay(8000);                      //Pause de 8 sec
  digitalWrite(ledvert, LOW);       //Eteint la led verte
  digitalWrite(ledjaune, HIGH);     //Allumer la led jaune
  delay(2000);                      //Pause de 2 sec
  digitalWrite(ledrouge2, LOW);     //Eteint la led rouge2
  digitalWrite(ledjaune, LOW);      //Eteint la led jaune
  digitalWrite(ledrouge, HIGH);     //Allumer la led rouge
  digitalWrite(ledvert2, HIGH);     //Allumer la led verte2
  delay(4000);                      //Pause de 4 sec
  digitalWrite(ledvert2, LOW);      //Eteint la led verte2
  digitalWrite(ledjaune2, HIGH);    //Allumer la led jeune2
  delay(2000);                      //Pause de 2 sec
  digitalWrite(ledrouge, LOW);      //Eteint la led rouge
  digitalWrite(ledjaune2, LOW);     //Eteint la led rouge2
  }                     






  
