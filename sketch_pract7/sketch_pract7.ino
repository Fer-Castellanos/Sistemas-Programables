int t1=250;
int t2=1000;
int t3=10;
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
 
  
  //                  ENCENDIDO CONSECUTIVO

analogWrite(3,abs(250));
delay(t1);
analogWrite(5,abs(250));
delay(t1);
analogWrite(6,abs(250));
delay(t1);
analogWrite(9,abs(250));
delay(t1);
analogWrite(10,abs(250));
delay(t1);

//                    APAGADO CONSECUTIVO

analogWrite(10,abs(0));
delay(t1);
analogWrite(9,abs(0));
delay(t1);
analogWrite(6,abs(0));
delay(t1);
analogWrite(5,abs(0));
delay(t1);
analogWrite(3,abs(0));
delay(t1);

//               ENCIENDE Y APAGA DE 1 EN 1

analogWrite(3,abs(250));
delay(t1);
analogWrite(3,abs(0));
delay(t1);
analogWrite(5,abs(250));
delay(t1);
analogWrite(5,abs(0));
delay(t1);
analogWrite(6,abs(250));
delay(t1);
analogWrite(6,abs(0));
delay(t1);
analogWrite(9,abs(250));
delay(t1);
analogWrite(9,abs(0));
delay(t1);
analogWrite(10,abs(250));
delay(t1);
analogWrite(10,abs(0));
delay(t1);

//                  TODOS ENCIENDEN PWM 0-100

for(i=0;i<250;i++)
{
  analogWrite(3,abs(i));
  analogWrite(5,abs(i));
  analogWrite(6,abs(i));
  analogWrite(9,abs(i));
  analogWrite(10,abs(i));
  delay(t3);
}

//                 TODOS SE APAGAN PWM 100-0

for(i=250;i>0;i--)
{
  analogWrite(3,abs(i));
  analogWrite(5,abs(i));
  analogWrite(6,abs(i));
  analogWrite(9,abs(i));
  analogWrite(10,abs(i));
  delay(t3);
}

}
