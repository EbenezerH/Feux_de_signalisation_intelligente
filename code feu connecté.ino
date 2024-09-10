
int A = 27;
int B = 29;
int C = 26;
int D = 24;
int E = 22;
int F = 25;
int G = 23;

int RED1 = 35;
int ORANGE1 = 34;
int GREEN1 = 33;

int RED2 = 32;
int ORANGE2 = 31;
int GREEN2 = 30;



void setup(){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  
  pinMode(RED1, OUTPUT);
  pinMode(ORANGE1, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(ORANGE2, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  //digitalWrite(RED1,HIGH);
  //digitalWrite(GREEN2,HIGH);

  Serial.begin(9600);
}


void loop(){
   digitalWrite(RED1, HIGH);
   digitalWrite(ORANGE1, LOW);
   digitalWrite(GREEN1, LOW);
   digitalWrite(RED2, LOW);
   digitalWrite(ORANGE2, LOW);
   digitalWrite(GREEN2, HIGH);
  int i;
  for(i=7;i>2;i--){
    Serial.print("i = ");
    Serial.println(i);
    led_num(i);
  }

   digitalWrite(RED1, HIGH);
   digitalWrite(ORANGE1, LOW);
   digitalWrite(GREEN1, LOW);
   digitalWrite(RED2, LOW);
   digitalWrite(ORANGE2, HIGH);
   digitalWrite(GREEN2, LOW);
   
   for(i=2;i>=1;i--){
    led_num(i);
  }

   digitalWrite(RED1, LOW);
   digitalWrite(ORANGE1, LOW);
   digitalWrite(GREEN1, HIGH);
   digitalWrite(RED2, HIGH);
   digitalWrite(ORANGE2, LOW);
   digitalWrite(GREEN2, LOW);
   for(i=4;i>1;i--){
    Serial.print("i = ");
    Serial.println(i);
    led_num(i);
  }

   digitalWrite(RED1, LOW);
   digitalWrite(ORANGE1, HIGH);
   digitalWrite(GREEN1, LOW);
   digitalWrite(RED2, HIGH);
   digitalWrite(ORANGE2, LOW);
   digitalWrite(GREEN2, LOW);
   led_num(1);
}

void led_num(int num){
  switch(num){
    case 1: 
      digitalWrite(A,HIGH); // 1 
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      delay(1000);
      break;
    case 2:
      digitalWrite(A,LOW);  // 2
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 3:
      digitalWrite(A,LOW);  // 3 
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 4:
      digitalWrite(A,HIGH);  // 4
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 5:
      digitalWrite(A,LOW);  // 5
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 6:
      digitalWrite(A,LOW);  // 6
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 7:
      digitalWrite(A,LOW);  // 7 
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      delay(1000);
      break;
    case 8:
      digitalWrite(A,LOW);  // 8 
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    case 9:
      digitalWrite(A,LOW);  // 9
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      delay(1000);
      break;
    default:
      digitalWrite(A,LOW);  // 0
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
      delay(1000);
      break;
  }
}
