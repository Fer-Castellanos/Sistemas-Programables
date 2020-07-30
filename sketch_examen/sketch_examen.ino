int t=1000;
int t2=7.5;
int i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
      pinMode(6,OUTPUT);
        pinMode(9,OUTPUT);
          pinMode(10,OUTPUT);
}

void loop() {
  // ENCIENDE X 1 SEG

  for(int i=3; i<=11; i++){
analogWrite(i,HIGH) ;
delay(t);
analogWrite(i,LOW);
delay(t);
}
  

// AGADADO X 1 SEG
for(int i=5; i>2; i--){
analogWrite(i,HIGH) ;
delay(t);
analogWrite(i,LOW);
delay(t);
 }
}

// DE DERECHA A IZQUIERDA PRENDEN 5,3,1 X 1 SEG
analogWrite(10,abs(250));
delay(t);
analogWrite(6,abs(250));
delay(t);
analogWrite(3,abs(250));
delay(t);

//APAGADO 5,3,1
 
 analogWrite(3,abs(0));
  delay(t);
 analogWrite(6,abs(0));
  delay(t);
 analogWrite(10,abs(0));
  delay(t);

  //3,5,6 pwd del 0-100% y del 100 al 0%

for(i=0;i<250;i++)
{
  analogWrite(3,abs(i));
  analogWrite(5,abs(i));
  analogWrite(6,abs(i));
  analogWrite(9,abs(i));
  analogWrite(10,abs(i));
  delay(t2);
}

// pwd 100% al 0-100%
for(i=250; i>0; i--)
{
  analogWrite(10,abs(i));
  analogWrite(9,abs(i));
  analogWrite(6,abs(i));
  analogWrite(5,abs(i));
  analogWrite(3,abs(i));
  delay(t2);
}
}

  
