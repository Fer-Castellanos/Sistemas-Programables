float gradosC =0;
float humedad=0;
float gradosF=0;
//exportando la libreria que se descargo
#include <DHT.h>
//definiendo la constante
#define  DHTPIN 2
# define DHTTYPE  DHT11

DHT dht(DHTPIN,DHTTYPE); //OBJETO  dht
                        //dht instancia u objeto
                        //DHT nombre de la clase
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();//inicializar el sensor 
}

void loop() {
  // put your main code here, to run repeatedly:
gradosC=dht.readTemperature();
humedad=dht.readHumidity();
gradosF=dht.readTemperature(true);

if(isnan(gradosC)||isnan(humedad)// isnan = no es un numero
||isnan(gradosF)){
  Serial.println("Error de lectura de datos");
  return;

  //imprimirlos
}
}
