const int a=2;
const int b=3;
const int c=4;
const int d=5;
const int e=6;
const int f=7;
const int g=8;
const int p=9;
const int d1=10;
const int d2=11;
const int d3=12;
const int d4=13;
int pot=0;
int unity=0;
int decimal=0;
int hundred=0;
int thousand=0;

void setup()
{
  Serial.begin(9600);
  for(int i=2;i<=13;i++){
  pinMode(i, OUTPUT);
  }
  pinMode(A0,INPUT);
}


void clearLeds(){
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(p,1);
}
void zero(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(p,1);
}
void one(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(p,1);
}
void two(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void three(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void four(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void five(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void six(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void seven(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(p,1);
}
void eight(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void nine(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(p,1);
}
void segment(int seg){
  
switch(seg){
    case 0:
      zero();
      break;
    case 1:
      one();
      break;
    case 2:
      two();
      break;
    case 3:
      three();
      break;
    case 4:
      four();
      break;
    case 5:
      five();
      break;
    case 6:
      six();
      break;
    case 7:
      seven();
      break;
    case 8:
      eight();
      break;
    case 9:
      nine();
      break;
    default:
      clearLeds();
      break;
  }
}

void loop()
{
  
    int num=analogRead(A0);
    
  pot=map(num,0,1024,0,10000);
  
 unity = pot%10;
  decimal=(pot%100)/10;
  hundred=(pot%1000)/100;
  thousand=(pot%10000)/1000;

  
  
  
      clearLeds();
        digitalWrite(d1,0);
      digitalWrite(d2,1);
      digitalWrite(d3,1);
      digitalWrite(d4,1);
        
      segment(unity);
   
     
      clearLeds();
        digitalWrite(d1,1);
      digitalWrite(d2,0);
      digitalWrite(d3,1);
      digitalWrite(d4,1);
        
      segment(decimal);
  
 
      clearLeds();
        digitalWrite(d1,1);
      digitalWrite(d2,1);
      digitalWrite(d3,0);
      digitalWrite(d4,1);
        
      segment(hundred);
  
    
   
      clearLeds();
        digitalWrite(d1,1);
      digitalWrite(d2,1);
      digitalWrite(d3,1);
      digitalWrite(d4,0);
          
      segment(thousand);

    clearLeds();


  
}