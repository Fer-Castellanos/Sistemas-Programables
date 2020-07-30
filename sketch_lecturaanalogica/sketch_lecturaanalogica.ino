int lectura=0;
int lectura2=0;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lectura=analogRead(A0);//0-1023
//monitorear el voltaje con regla de 3 simple 
lectura2=lectura*5/1023;
Serial.println(lectura2);
delay(1000);

}
