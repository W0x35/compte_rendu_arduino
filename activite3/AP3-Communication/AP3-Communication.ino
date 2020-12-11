void setup() {
 Serial.begin(115200);                         //Initialise la vitesse 
}

void loop() {
 Serial.println("Arduino, pour te servir!"); //Ecrie dans le Terminal
 delay(1000);                                //Pause de 1 sec
}
