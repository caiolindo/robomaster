void setup ()
{
   Serial.begin(9600);
}

boolean sense(){
  int x = analogRead(A0);
  boolean leitura;
  if(x<690){
    leitura = true;
  }
  if(x>690){
    leitura = false;
  }  

return leitura;
}


void loop()
{
   Serial.println(sense());
}


