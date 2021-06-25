int Aen=13;
int Ain1=7;
int Ain2=6;

int Ben=12;
int Bin1=4;
int Bin2=5;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
 
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  //Enable the two motors first  
  digitalWrite(Aen, HIGH);
  digitalWrite(Ben, HIGH);
 
 
  //Rotate two motors forward
  digitalWrite(Ain1, HIGH);
  digitalWrite(Ain2, LOW);
 
  digitalWrite(Bin1, HIGH);
  digitalWrite(Bin2, LOW);
 

  delay(1000);
 

  digitalWrite(Ain1, LOW);
  digitalWrite(Ain2, HIGH);
 
  digitalWrite(Bin1, LOW);
  digitalWrite(Bin2, HIGH);
 

  delay(2000);

}
