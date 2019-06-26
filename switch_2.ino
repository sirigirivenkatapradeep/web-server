#define led D2
#define led D1
#define switch1 D3
#define switch2 D4
void setup() {
  // put your setup code here, to run once:
  pinMode(D2,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D3,INPUT);
  pinMode(D4,INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
boolean state,country;
state=digitalRead(switch1);
country=digitalRead(switch2);
if(state==LOW)
{
  digitalWrite(D1,HIGH); 
  digitalWrite(D2,LOW); 
}
if(country==LOW)
{
  digitalWrite(D1,LOW); 
  digitalWrite(D1,HIGH); 
}
delay(1000);
}
/*
#define led D2
#define led D1
#define switch1 D3
#define switch2 D4
void setup() {
  // put your setup code here, to run once:
  pinMode(D2,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D3,INPUT);
  pinMode(D4,INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
boolean state,country;
state=digitalRead(switch1);
country=digitalRead(switch2);
if(state==0)
{
  digitalWrite(D2,HIGH); 
}
else
digitalWrite(D2,LOW); 
if(country==0)
{
  digitalWrite(D1,HIGH); 
}
else
digitalWrite(D1,LOW); 
}*/
