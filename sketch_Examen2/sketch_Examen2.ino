 float gradosC=0;
 int led1=1;
 int led2=3;
 int led3=5;
 int led4=6;


 #include <DHT.h>

 #define DHTPIN 8
 #define DHTTYPE DHT11

 DHT dht (DHTPIN,DHTTYPE);
void setup() {
Serial.begin(9600); 


pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);

 

}

void loop() {

  gradosC=dht.readTemperature();

  Serial.print("Grados Cº ");
  Serial.println(gradosC);

   if(gradosC <18.3 ){

 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,LOW);
 
   }
 if(gradosC >=18.3 && gradosC <25){  //pwm
  
   for(int i = 0; i<256; i++){
  analogWrite(led1,i);
  analogWrite(led2,i);
  analogWrite(led3,i);
  analogWrite(led4,i);
  delay(10);
  }
  for(int i = 255; i>0; i--){
  analogWrite(led1,i);
  analogWrite(led2,i);
  analogWrite(led3,i);
  digitalWrite(led4,i);
  delay(10);
  }
 }
  if(gradosC >= 25){
  
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
   digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led4,HIGH);
  delay(1000);
  
  
  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
   digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
   
  
  
 }
  
 }
