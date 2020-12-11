const int e= 2  ; //déclaration constante de broche 
const int d= 3  ; 
const int c= 4  ; 
const int pt= 5 ;  
const int g= 6  ;
const int f= 7  ; 
const int a= 8  ; 
const int b= 9  ; 

int vitesse=300; // variable de vitesse

void setup() {
pinMode(e, OUTPUT); //initialise les PIN
pinMode(d, OUTPUT);
pinMode(c, OUTPUT); 
pinMode(pt, OUTPUT); 
pinMode(g, OUTPUT);
pinMode(f, OUTPUT);
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
}

void loop() { //Permet de afficher toutes les chiffres de 0 à 9
//0
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(c,1),digitalWrite(d,1),digitalWrite(e,1),digitalWrite(f,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(c,0),digitalWrite(d,0),digitalWrite(e,0),digitalWrite(f,0);
//1
digitalWrite(b,1),digitalWrite(c,1);
delay(vitesse);
digitalWrite(b,0),digitalWrite(c,0);
//2
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(g,1),digitalWrite(e,1),digitalWrite(d,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(g,0),digitalWrite(e,0),digitalWrite(d,0);
//3
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(g,1),digitalWrite(c,1),digitalWrite(d,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(g,0),digitalWrite(c,0),digitalWrite(d,0);
//4
digitalWrite(f,1),digitalWrite(b,1),digitalWrite(g,1),digitalWrite(c,1);
delay(vitesse);
digitalWrite(f,0),digitalWrite(b,0),digitalWrite(g,0),digitalWrite(c,0);
//5
digitalWrite(a,1),digitalWrite(f,1),digitalWrite(g,1),digitalWrite(c,1),digitalWrite(d,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(f,0),digitalWrite(g,0),digitalWrite(c,0),digitalWrite(d,0);
//6
digitalWrite(a,1),digitalWrite(f,1),digitalWrite(g,1),digitalWrite(c,1),digitalWrite(d,1),digitalWrite(e,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(f,0),digitalWrite(g,0),digitalWrite(c,0),digitalWrite(d,0),digitalWrite(e,0);
//7
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(c,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(c,0);
//8
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(c,1),digitalWrite(d,1),digitalWrite(e,1),digitalWrite(f,1),digitalWrite(g,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(c,0),digitalWrite(d,0),digitalWrite(e,0),digitalWrite(f,0),digitalWrite(g,0);
//9
digitalWrite(a,1),digitalWrite(b,1),digitalWrite(c,1),digitalWrite(d,1),digitalWrite(f,1),digitalWrite(g,1);
delay(vitesse);
digitalWrite(a,0),digitalWrite(b,0),digitalWrite(c,0),digitalWrite(d,0),digitalWrite(f,0),digitalWrite(g,0);
}
