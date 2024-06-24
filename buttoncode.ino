int led=13;
int buttonPin=2;
int bs=0;
void setup() 
{
 pinMode(led,OUTPUT);
  pinMode(buttonPin,INPUT);
  
}

void loop() 
{
 bs=digitalRead(buttonPin);
  if (bs==HIGH)
  {digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);}

}
