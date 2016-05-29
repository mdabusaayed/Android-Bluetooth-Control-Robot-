int Lena     = 5;
int LmotorUp = 6;
int LmotorDn = 7;
int RmotorUp = 8;
int RmotorDn = 9;
int Rena     = 10;
int sp = 160;

void setup()
{
  Serial.begin(9600);
  pinMode(LmotorUp,OUTPUT);
  pinMode(LmotorDn,OUTPUT);
  pinMode(RmotorUp,OUTPUT);
  pinMode(RmotorDn,OUTPUT);
  pinMode(Lena, OUTPUT);
  pinMode(Rena, OUTPUT);
  Serial.println(" Welcomes <Journey To Universe> ");
  delay(1000);
} 
  

void loop()
{
  if(Serial.available()>0)
  {
    int input = Serial.read();
    switch(input)
    {
     case 'w' : MoveF();
     break;
     case 's' : MoveB();
     break;
     case 'a' : MoveL();
     break;
     case 'd' : MoveR();
     break;
     case 'x' : Stop();
     break;
     default : break;
    }
  } 
  delay(50);
}

void MoveF()
{
  Serial.println("JTM Going Forward");
  analogWrite(Lena, sp);
  analogWrite(Rena, sp);
  digitalWrite(LmotorUp,HIGH);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,HIGH);
  digitalWrite(RmotorDn,LOW);
}

void MoveB()
{
  Serial.println("JTM Going Backward");
  analogWrite(Lena, sp);
  analogWrite(Rena, sp);
  digitalWrite(LmotorUp,LOW);
  digitalWrite(LmotorDn,HIGH);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,HIGH);
}

void MoveL()
{
  Serial.println("JTM Going Left");
  analogWrite(Lena, sp);
  analogWrite(Rena, sp);
  digitalWrite(LmotorUp,LOW);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,HIGH);
  digitalWrite(RmotorDn,LOW);
}

void MoveR()
{
  Serial.println("JTM Going Right");
  analogWrite(Lena, sp);
  analogWrite(Rena, sp);
  digitalWrite(LmotorUp,HIGH);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,LOW);
}

void Stop()
{
  Serial.println("JTM Going Stop");
  analogWrite(Lena, sp);
  analogWrite(Rena, sp);
  digitalWrite(LmotorUp,LOW);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,LOW);
}