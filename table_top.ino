void setup() {
  
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(4,INPUT);
pinMode(12,INPUT);
pinMode(3,INPUT);
pinMode(13,INPUT);
}

void forward()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
}
void reverse()
{
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
}
void left()
{
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,0);
}
void right()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,1);
}
int l1,l2,r1,r2;
void loop()
{
  l1-digitalRead(4);
  l2=digitalRead(12);
  r1=digitalRead(3);
  r2=digitalRead(13);

  if((l1==0) && (r1==0) && (l2==1) && (r2==1))
  {
    left();
    delay(480);
  }
  else if((l1==0) && (r1==1) && (l2==0) && (r2==1))
  {
    right();
    delay(100);
  }
  else if((l1==0) && (r1==1) && (l2==1) && (r2==0))
  {
    right();
    delay(50);
  }
  else if((l1==1) && (r1==0) && (l2==1) && (r2==0))
  {
    left();
    delay(100);
  }
  else if((l1==1) && (r1==0) && (l2==1) && (r2==1))
  {
    left();
    delay(50);
  }
  else if((l1==1) && (r1==1) && (l2==0) && (r2==0))
  {
    forward();
    delay(50);
  }
  else if((l1==1) && (r1==1) && (l2==0) && (r2==1))
  {
    right();
    delay(50);
  }
  else if((l1==1) && (r1==1) && (l2==1) && (r2==0))
  {
    left();
    delay(50);
  }
}






 
