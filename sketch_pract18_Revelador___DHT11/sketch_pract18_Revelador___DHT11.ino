#include <DHT.h>
#define DHTPIN 3
#define DHTTYPE DHT11

float gradosCelsiusDHT11 = 0;
DHT dht(DHTPIN,DHTTYPE); //objeto DHT

void setup() {
  
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  dht.begin(); //inicializamos el sensor

}

void loop() {
  
  //Leer la temperatura desde el DHT11
  gradosCelsiusDHT11 = dht.readTemperature(); //celsius

   //se asegura de la lectura
  if(isnan(gradosCelsiusDHT11)){
    Serial.println("Error de lectura de datos");
    return;
  } else { //en caso de recibir información limpia, 
    if(gradosCelsiusDHT11<20.0){ //se enciende sólo el led #1
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      delay(1000);
    }
    if(gradosCelsiusDHT11>= 20 && gradosCelsiusDHT11<25){ //se enciende sólo el led #2
      digitalWrite(4,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(5,HIGH);
      delay(1000);
    }
    if(gradosCelsiusDHT11>=25){ //se enciende sólo el foco
      digitalWrite(4,LOW);
      digitalWrite(2,LOW);
      digitalWrite(5,LOW);
      delay(1000);
    }
    Serial.println("");
    Serial.print("La temperatura según el sensor DHT11 es: ");
    Serial.print(gradosCelsiusDHT11);
    Serial.println("C°");
    delay(1000);

  }
}
