int va1;
int tempPin=1;
int led1=3;
int led2=5;
int led3=6;
int t=1000;
void setup() {
  // put your setup code here, to run once:
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(A1,INPUT); 
 
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   va1=analogRead(tempPin);
  float mv=(va1/1024.0)*5000.0;
  float gCenti=mv/10;
  float fath=(gCenti*9)/5+32;
  Serial.print("temperatura Grados C* :");
  Serial.println(gCenti);

  Serial.print("temperatura Grados F*:");
  Serial.println(fath);
  Serial.println();

  delay(t);
}
