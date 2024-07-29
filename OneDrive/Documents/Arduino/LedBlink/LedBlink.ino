void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=1;i<=4;i++){
  digitalWrite(i+1,1);
  delay(1000);
  Serial.print("Led_");
  Serial.print(i+1);
  Serial.print(" is on\n");
  digitalWrite(i+1,0);
  delay("1000");
  Serial.print("Led_");
  Serial.print(i+1);
  Serial.print(" is off\n");
}

}
