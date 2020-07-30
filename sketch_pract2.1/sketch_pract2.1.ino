int t=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
     pinMode(5, OUTPUT);
      pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=2; i<=6; i++){
digitalWrite(i,HIGH) ;
delay(t);
 }

for(int i=6; i>=2; i--){ 
digitalWrite(i,LOW) ;

delay(t);
 }
}
