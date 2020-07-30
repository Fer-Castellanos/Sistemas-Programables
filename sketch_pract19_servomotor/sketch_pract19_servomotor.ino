#include <Servo.h>
Servo servo;
void setup() {
  // put your setup code here, to run once:
   pinMode(3,OUTPUT);
  servo.attach(3); //inicializamos  el Servo motor conectado al pin digital 
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(0); //lo mandamos a cero grados de movimiento
  delay(1000);
  servo.write(180);
  delay(500);
  servo.detach();// des-energizamos el servo motor
  delay(500);

}
