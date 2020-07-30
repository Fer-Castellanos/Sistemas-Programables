int pin_Trig = 3;
int pin_Echo = 2;
double duracion;
double tiempo;
double distancia;

void setup() {
 pinMode(pin_Trig, OUTPUT);
 pinMode(pin_Echo, INPUT);
 Serial.begin(9600);   

 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);

}

void loop() {
   digitalWrite(pin_Trig,HIGH);
   delay(0.01);
   digitalWrite(pin_Trig,LOW);

   duracion = pulseIn(pin_Echo,HIGH);//valor en microsegundos de ida y vuelta de la onda de sonido
   tiempo = duracion/2; //tiempo desde el inicio hasta donde se encuentra el objeto
   distancia = 0.03432*tiempo; // distancia en cm

    if(distancia >= 2 && distancia <=15){
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
    }
    if(distancia > 15){
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
    }

   Serial.println(distancia);
   delay(500);

}
