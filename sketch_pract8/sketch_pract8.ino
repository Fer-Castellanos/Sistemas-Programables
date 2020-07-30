int t=500;
int t2=250;
int t1=1000;

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
  //               ENCIENDE

analogWrite(3,abs(250));
delay(t);
analogWrite(5,abs(250));
delay(t);
analogWrite(6,abs(250));
delay(t);
analogWrite(9,abs(250));
delay(t);
analogWrite(10,abs(250));
delay(t);
  

//               APAGADO

analogWrite(10,abs(0));
delay(t2);
analogWrite(9,abs(0));
delay(t2);
analogWrite(6,abs(0));
delay(t2);
analogWrite(5,abs(0));
delay(t2);
analogWrite(3,abs(0));
delay(t2);

// ENCIENDE 3,6,10

analogWrite(3,abs(250));
delay(t1);
analogWrite(6,abs(250));
delay(t1);
analogWrite(10,abs(250));
delay(t1);


// SE APAGA 3,6,10 


  analogWrite(10,abs(0));
  delay(t1);
  analogWrite(6,abs(0));
  delay(t1);
  analogWrite(3,abs(0));
  delay(t1);

}
  
