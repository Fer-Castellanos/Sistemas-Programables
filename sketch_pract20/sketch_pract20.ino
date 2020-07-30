
void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT_PULLUP);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   if(digitalRead(6) == LOW){//presionado
        digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
}
