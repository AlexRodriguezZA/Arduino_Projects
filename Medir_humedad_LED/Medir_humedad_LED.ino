//Prender y apagar led dependiendo de la humedad
void setup() {
  pinMode(5,OUTPUT);  // attaches the servo on pin 9 to the servo object
  Serial.begin (9600);
}
  
void loop() {
  int valorHumedad = analogRead (5);
  Serial.println(valorHumedad);
  int valorPin = map (valorHumedad,450,1023,0,255);
  analogWrite(5,valorPin);
  delay(250);
  

   }

