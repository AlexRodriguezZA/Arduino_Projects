int Rojo = 3;
int Verde = 5;
int Azul = 6;
 
void setup() {
pinMode(Rojo,OUTPUT);
pinMode(Verde,OUTPUT);
pinMode(Azul,OUTPUT);
}
 
void loop() {

//color rojo
    digitalWrite(Rojo,255);
    digitalWrite(Verde,0);
    digitalWrite(Azul,0);
    delay(500);
    
//color verde
    digitalWrite(Rojo,0);
    digitalWrite(Verde,255);
    digitalWrite(Azul,0);
    delay(500);
    
//color azul
    digitalWrite(Rojo,0);
    digitalWrite(Verde,0);
    digitalWrite(Azul,255);
    delay(500);

 

}