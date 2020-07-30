

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  //a)
  //todos prenden por un segundo y se apagan por un segundo
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);

  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1000);

  //b)
  //de derecha a izquierda, prenden 5°,3° y 1° x 1seg.
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(3,HIGH);
  delay(1000);

  //apaga 1°, 3° y 5° por un segundo
  
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);

  //c)
  //1°,3° y 5° PWM del 0-100% y del 100% al 0°
  
  for(int i = 0; i<256; i++){
  analogWrite(3,i);
  analogWrite(6,i);
  analogWrite(10,i);
  delay(10);
  }
  for(int i = 255; i>0; i--){
    analogWrite(3,i);
  analogWrite(6,i);
  analogWrite(10,i);
  delay(10);
  }

  //delay, quizá

  //d)
  //secuencia de izq a derecha x 1/8s 
  digitalWrite(3,HIGH);
  delay(125);
  digitalWrite(5,HIGH);
  delay(125);
  digitalWrite(6,HIGH);
  delay(125);
  digitalWrite(9,HIGH);
  delay(125);
  digitalWrite(10,HIGH);
  delay(125);

  //apagar de derecha a izquierda x 1/8s
  digitalWrite(10,LOW);
  delay(125);
  digitalWrite(9,LOW);
  delay(125);
  digitalWrite(6,LOW);
  delay(125);
  digitalWrite(5,LOW);
  delay(125);
  digitalWrite(3,LOW);
  delay(125);

  delay(1000);
}
