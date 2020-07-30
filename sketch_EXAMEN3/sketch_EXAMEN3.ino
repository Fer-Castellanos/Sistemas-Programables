#include <DHT.h>
#include <Servo.h>
#define DHTPIN 2
#define DHTTYPE DHT11
float gradosC = 0;
DHT dht(DHTPIN, DHTTYPE);
Servo servo;
int pos;
bool flag=0;

void setup() {
 pinMode(6,INPUT_PULLUP); //pin para conectar el push button
 pinMode(4,OUTPUT); //pin primer led (programa 1)
 pinMode(5,OUTPUT); //pin segundo led (programa 2)
 Serial.begin(9600); //serial para leer temperatura (programa 2)
 dht.begin(); //iniciar sensor de temperatura (programa 2)
 pinMode(3,OUTPUT); //pin para conectar el servo
  servo.attach(3); //inicializamos el servo
  servo.write(180);// iniciar servo en 180 grados
  delay(1000);
  servo.detach(); //des-energizar el servomotor
}

void loop() {
  //Primer programa
  
  //Segundo programa
  gradosC = dht.readTemperature();
  
  Serial.print(gradosC);
  Serial.println("°C");

   servo.write(0);
 
     if (gradosC > 29) {
      //el led debe parpadear si la temperatura sigue siendo mayor a 29
      digitalWrite(5,HIGH);
      delay(10);
      pos=(flag==0) ? 0 :180;
      servo.attach(3);
      servo.write(pos);
      delay(2000);
      servo.detach();
      
     if (gradosC > 29) {
       digitalWrite(5,LOW);
       delay(1000);
       digitalWrite(5,HIGH);
       delay(1000);
    }
     }
}
  
  
