int Park1 = 0;
int Park2 = 0;
int Park3 = 0;
int Park4 = 0;
int Park5 = 0;
int Park6 = 0;
int Park7 = 0;
int Park8 = 0;
int Park9 = 0;
int Park10 = 0;
int Giris0 = 0;

void setup()
{
   Serial.begin(9600);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  pinMode(8,OUTPUT); //oteki ard data 6
  pinMode(9,OUTPUT); //oteki ard data 7
  pinMode(10,OUTPUT); //oteki ard data 8
  pinMode(11,OUTPUT); //oteki ard data 11
  pinMode(12,OUTPUT); //oteki ard data 12
  pinMode(13,OUTPUT); //oteki ard data 13
  
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);

}
 
void loop()
{
 
Park1 = analogRead(A0);
Park2 = analogRead(A1);
Park3 = analogRead(A2);
Park4 = analogRead(A3);
Park5 = analogRead(A4);
Park6 = analogRead(A5);

digitalWrite(2,HIGH);

if(Park1 >= 600)
{
  digitalWrite(2,LOW);
  digitalWrite(8,HIGH);
}
else
   {
   digitalWrite(2,HIGH);
digitalWrite(8,LOW);
}

if(Park2 >= 450)
{
  digitalWrite(3,LOW);
  digitalWrite(9,HIGH);
}
else
   {
   digitalWrite(3,HIGH);
   digitalWrite(9,LOW);
}

if(Park3 >= 300)
 {
  digitalWrite(4,LOW);
  digitalWrite(10,HIGH);
}
else
   {
   digitalWrite(4,HIGH);
   digitalWrite(10,LOW);
}

if(Park4 >= 300)
  {
  digitalWrite(5,LOW);
  digitalWrite(11,HIGH);
}
else
   {
   digitalWrite(5,HIGH);
   digitalWrite(11,LOW);
}

if(Park5 >= 974)
  {
  digitalWrite(6,LOW);
  digitalWrite(12,HIGH);
}
else
   {
   digitalWrite(6,HIGH);
   digitalWrite(12,LOW);
}
   
if(Park6 >= 450)
  {
  digitalWrite(7,LOW);
  digitalWrite(13,HIGH);
}
else
   {
   digitalWrite(7,HIGH);
   digitalWrite(13,LOW);
}


 
 delay(500);

  

}
