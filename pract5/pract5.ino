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
 for(int i=0; i<255; i++){
 analogWrite(10,abs(i));
 analogWrite(9,abs(i));
 analogWrite(6,abs(i));
 analogWrite(5,abs(i));
 analogWrite(3,abs(i));
 
 delay(10);
 

 
}
}
