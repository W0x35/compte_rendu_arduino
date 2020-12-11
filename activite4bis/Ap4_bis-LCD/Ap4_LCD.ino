#include <Wire.h>                         //Déclaration des bibliothèque 
#include "rgb_lcd.h"
 
rgb_lcd lcd;                              //Initialise la bibliothèque    
 
const int colorR = 255;                   //Set la couleur de l'écran Dans ce cas en rouge 
const int colorG = 0;
const int colorB = 0;

void setup() 
{
    lcd.begin(16, 2);                     //Définis la taille de l'écran LCD
 
    lcd.setRGB (colorR, colorG, colorB);  //Dire les couleurs utilsisé donc le rouge 

    lcd.print("STI2D-SIN");               //Phrase sur la première ligne pas plus de 16 carractère 
    lcd.setCursor(0, 1);                  //Pour passé à la ligne suivante 
    lcd.print("LYCEE BREQUIGNY");         //Phrase sur la seconde ligne pas plus de 16 carractère 
    delay(1000);                          //Pause de 1 sec
}
 
void loop() 
{

}
