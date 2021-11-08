#include <Servo.h>

Servo servoNesnesi; //SAĞ KAPI
Servo servoNesnesi1; //SOL KAPI
int sayac = 10; //KAPI SAYISI

int Park1 = 0;
int Park2 = 0;
int Park3 = 0;
int Park4 = 0;
int Park5 = 0;
int Park6 = 0;

int kontrol1 = 1;
int kontrol2 = 1;
int kontrol3 = 1;
int kontrol4 = 1;
int kontrol5 = 1;
int kontrol6 = 1;
int kontrol7 = 1;
int kontrol8 = 1;
int kontrol9 = 1;
int kontrol10 = 1;



void setup()
{
  Serial.begin(9600);
    
  servoNesnesi.attach(9);  
  servoNesnesi1.attach(10);  
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  pinMode(6,INPUT); //diger arduinoya sinyal
  pinMode(7,INPUT); //diger arduinoya sinyal
  pinMode(8,INPUT); //diger arduinoya sinyal
  pinMode(11,INPUT); //diger arduinoya sinyal
  pinMode(12,INPUT); //diger arduinoya sinyal
  pinMode(13,INPUT); //diger arduinoya sinyal
  

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);

}
 
void loop()
{
  
Park1 = analogRead(A0);
Park2 = analogRead(A1);
Park3 = analogRead(A2);
Park4 = analogRead(A3);
Park5 = analogRead(A4);//KAPI GİRİŞİ 
Park6 = analogRead(A5);//KAPI GİRİŞİ 


if(digitalRead(6) == HIGH){
 if(kontrol5 == 1)
  {
  sayac--;
  kontrol5 = 0;
  }
  }
else{
  if(kontrol5 == 0)
   {
   sayac++;
   kontrol5 = 1;
   }
}

if(digitalRead(7) == HIGH){
 if(kontrol6 == 1)
  {
  sayac--;
  kontrol6 = 0;
  }
  }
else{
  if(kontrol6 == 0)
   {
   sayac++;
   kontrol6 = 1;
   }
}

if(digitalRead(8) == HIGH){
 if(kontrol7 == 1)
  {
  sayac--;
  kontrol7 = 0;
  }
  }
else{
  if(kontrol7 == 0)
   {
   sayac++;
   kontrol7 = 1;
   }
}

if(digitalRead(11) == HIGH){
 if(kontrol8 == 1)
  {
  sayac--;
  kontrol8 = 0;
  }
  }
else{
  if(kontrol8 == 0)
   {
   sayac++;
   kontrol8 = 1;
   }
}

if(digitalRead(12) == HIGH){
 if(kontrol9 == 1)
  {
  sayac--;
  kontrol9 = 0;
  }
  }
else{
  if(kontrol9 == 0)
   {
   sayac++;
   kontrol9 = 1;
   }
}

if(digitalRead(13) == HIGH){
 if(kontrol10 == 1)
  {
  sayac--;
  kontrol10 = 0;
  }
}
else{
  if(kontrol10 == 0)
   {
   sayac++;
   kontrol10 = 1;
   }
}






if(Park1 >= 600)
{
  digitalWrite(2,LOW);
  if(kontrol1 == 1)
  {
  sayac--;
  kontrol1 = 0;
  }
  //digitalWrite(6,HIGH);
}
else
{
   digitalWrite(2,HIGH);
   if(kontrol1 == 0)
   {
   sayac++;
   kontrol1 = 1;
   }
   //digitalWrite(6,LOW);
}

if(Park2 >= 450)
{
  digitalWrite(3,LOW);
  if(kontrol2 == 1)
  {
  sayac--;
  kontrol2 = 0;
  }
  //digitalWrite(7,HIGH);
}
else
{
   digitalWrite(3,HIGH);
   if(kontrol2 == 0)
   {
   sayac++;
   kontrol2 = 1;
   }
   //digitalWrite(7,LOW);
}

if(Park3 >= 300)
{
  digitalWrite(4,LOW);
  if(kontrol3 == 1)
  {
  sayac--;
  kontrol3 = 0;
  }
  //digitalWrite(8,HIGH);
}
else
{
   digitalWrite(4,HIGH);
    if(kontrol3 == 0)
   {
   sayac++;
   kontrol3 = 1;
   }
   //digitalWrite(8,LOW);
}

if(Park4 >= 300)
{
  digitalWrite(5,LOW);
  if(kontrol4 == 1)
  {
  sayac--;
  kontrol4 = 0;
  }
 // digitalWrite(11,HIGH);
}
else
{
   digitalWrite(5,HIGH);
    if(kontrol4 == 0)
   {
   sayac++;
   kontrol4 = 1;
   }
 //  digitalWrite(11,LOW);
}

if(Park5 >= 970)
{
  delay(1000);
  servoNesnesi.write(0);  
 

}
else
{
    servoNesnesi.write(73); 
  }



if(Park6 >= 400)
{
  delay(1000);
  servoNesnesi1.write(0); 
 

}
else
{
    servoNesnesi1.write(73);  
  }

  




char str[4];
itoa(sayac, str, 10); //SAYACI GONDERIYOR
Serial.write(str, 4);


 
delay(500);

}
