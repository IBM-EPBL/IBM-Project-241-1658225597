const int pir=4;
const int temp=A0;
int led=6;
int motor=7;
int buzzer=8;
void setup()
{
  Serial.begin(9600);
  pinMode(pir,INPUT);
  pinMode(temp,INPUT);
  pinMode(led,OUTPUT);
  pinMode(motor,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  int pirval=digitalRead(pir);
  int tempval=analogRead(temp);
  if(pirval==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  if(tempval>=200)
  {
    digitalWrite(motor,LOW);
    digitalWrite(buzzer,LOW);
  } 
  else
  {
    digitalWrite(motor,HIGH);
    digitalWrite(buzzer,HIGH);
  }
}
