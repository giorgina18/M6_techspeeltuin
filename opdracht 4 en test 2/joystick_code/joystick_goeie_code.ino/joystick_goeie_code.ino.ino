const int LRpin = A0;
const int UDpin = A1;

int LR;
int UD;

int LR_neutral;
int UD_neutral;

const int Rpin = 3;
const int Ypin = 9;
const int Gpin = 6;
const int Bpin = 12;


int R;
int Y;
int G;
int B;

const int deadzone=10;

void setup(){
  Serial.begin(115200);


  LR_neutral = analogRead(LRpin);
  UD_neutral = analogRead(UDpin);
}

void loop(){
  // main code here to run repeadly
  LR = analogRead(LRpin);
  UD = analogRead(UDpin);

if(UD>=UD_neutral+deadzone){
  B = 0;
  R = map(UD,UD_neutral,1023,0,255);
  }
  else if(UD<=UD_neutral-deadzone){
    R = 0;
    B = map(UD,UD_neutral,0,0,255);
  }
  else{
    R = 0;
    B = 0;
  }
  
  if(LR>=LR_neutral+deadzone){
    Y = 0;
    G = map(LR,LR_neutral,1023,0,255); 
  }
  else if(LR<=LR_neutral-deadzone) {
    G = 0;
    Y = map(LR,LR_neutral,0,0,255);
  }

else {
  G = 0;
  Y = 0;
}
  
analogWrite(Rpin,R);
analogWrite(Ypin,Y);
analogWrite(Bpin,B);
analogWrite(Gpin,G);

  //print values
//  Serial.print("LR: ");
//  Serial.print(LR);
//  Serial.print(" UD: ");
//  Serial.print(UD);
  }

  

  
