void loop()
{
int  butondurum=digitalRead(kontrol);  //arttırma butonu okunuyor
  if(butondurum==HIGH && sayac<9){              
    sayac=sayac+1;
      motor.write(90);
    while(1){
      butondurum=digitalRead(buton);
      if(butondurum==LOW)
      return;
      
      }
    }
  goster(sayac);
  
  
  butondurum2=digitalRead(buton2);  //azaltma butonu okunuyor
  if(butondurum2==HIGH && sayac>0){
    sayac=sayac-1;
     motor.write(90);
    while(1){
      butondurum2=digitalRead(buton2);
      if(butondurum2==LOW)
      return;
      
      }
    }
  goster(sayac);
  
  butondurum3=digitalRead(buton3);  // bariyer kapatma butonu
  
  if(butondurum3==HIGH){
    
     motor.write(0);  
  }

  
  }
void goster (int rakam){
  
  switch (rakam) {
  case 0:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(N,HIGH);// sıfır yanar
    break;
  case 1:
 digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(N,HIGH);// 1 yanar
    break;
    case 2:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 2 yanar
    break;
    case 3:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 3yanar
    break;
    case 4:
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 4 yanar
    break;
    case 5:
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 5 yanar
    break;
    case 6:
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 6 yanar
    break;
    case 7:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(N,HIGH);// 7 yanar
    break;
    case 8:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 8 yanar
    break;
  case 9:
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(N,HIGH);// 9 yanar
    break;
    
  }
}
