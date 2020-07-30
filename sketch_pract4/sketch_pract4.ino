void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(3,HIGH);
delay(51);
digitalWrite(3,LOW);
delay(51);
digitalWrite(5,HIGH);
delay(127);
digitalWrite(5,LOW);
delay(127);
digitalWrite(6,HIGH);
delay(51);
digitalWrite(6,LOW);
delay(12.75);
digitalWrite(9,HIGH);
delay(12.75);
digitalWrite(9,LOW);
delay(12.75);



}
