void setup() {
  // put your setup code here, to run once:
pinMode(D0,OUTPUT);
pinMode(D5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(D0==HIGH)
  {
  digitalWrite(D0,HIGH);
  delay(1000);
  }
  //else
 //if(D0!=HIGH)
 {
  digitalWrite(D5,LOW);
  delay(1000);
 }

}
