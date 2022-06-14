//Leer la intencidad de la luz y con eso mover el servo motor
#include <Servo.h>

Servo miservo;

void setup() {
  pinMode(A0,INPUT);
  miservo.attach(9);
}

void loop() {
  int valorLuz = analogRead(A0);
  int angulo = map(valorLuz, 0,1023,0,180);  
  miservo.write(angulo);
}
