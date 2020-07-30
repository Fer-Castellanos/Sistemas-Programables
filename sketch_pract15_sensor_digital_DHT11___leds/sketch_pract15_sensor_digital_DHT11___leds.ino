float gradosC=0;
float humedad=0;
float gradosF=0;
int led1=3;
int led2=5;
int led3=6;
int t=1000;
#include <DHT.h>

#define  DHTPIN 2
# define DHTTYPE  DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);
dht.begin();//inicializar el sensor

}

void loop() {
  // put your main code here, to run repeatedly:
 //delay (1000);
  // put your main code here, to run repeatedly:
gradosC=dht.readTemperature();
humedad=dht.readHumidity(); // la humedad se mide por porcentaje del 0 al 100%
gradosF=dht.readTemperature(true);

if(isnan(gradosC)||isnan(humedad)||isnan(gradosF)){  // isnan = no es un numero

 
  Serial.println("Error de lectura de datos");
  return;
}
  //imprimirlos
  Serial.print("Grados Cº ");
  Serial.println(gradosC);
  Serial.print("humedad ");
  Serial.println(humedad);
  Serial.print("Grados Fº ");
  Serial.println(gradosF);
   if(gradosC <18.0 && gradosC <21.0){

 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 delay(1000);
 }
 
 if(gradosC >=21.0 && gradosC < 28.0){

  digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 delay(1000);
 }

 if(gradosC >=28.0){

 
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
 delay(1000);

 
  
 }  }
