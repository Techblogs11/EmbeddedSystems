const int red   = 3;
const int blue  = 5;
const int green = 6;

int redVal   = 0;
int blueVal  = 0;
int greenVal = 0;


void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
}

void loop()
{
  int r=analogRead(A0);
  int b=analogRead(A1);
  int g=analogRead(A2);
  
  redVal   = map(r,0,1024,0,255);
  blueVal  = map(b,0,1024,0,255);
  greenVal = map(g,0,1024,0,255);
  
  
  analogWrite(red,redVal);
  analogWrite(blue,blueVal);
  analogWrite(green, greenVal);
}
