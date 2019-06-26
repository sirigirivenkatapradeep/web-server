#define led1 D2
#define led2 D3
#define Switch1 D4
#define Switch2 D5
void setup() {
  // put your setup code here, to run once:
  pinMode(D2,OUTPUT);
  pinMode(D3,INPUT);

}

void loop() {
  int state1=1,state2=2;
  // put your main code here, to run repeatedly:
 boolean state1,state2;
 if(state1==state2)
 {
state1=digitalRead(Switch1);

digitalWrite(led1,state1);
 }
else if(state1!=state2)
{
  state2=digitalRead(Switch2);
digitalWrite(led2,state2);
}
delay(100);
}
