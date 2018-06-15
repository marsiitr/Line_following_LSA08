int mLeft=7 ,mRight=2 ,mLeft1=11 ,mLeft2=12 ,mRight1=3 ,mRight2=4;
int select;
int Wsum;
int sensorPin[8];
int weight[8];
 
void moveLeft(){
  digitalWrite(mLeft1, LOW);
  digitalWrite(mLeft2, LOW);
  digitalWrite(mRight1,HIGH);
  digitalWrite(mRight2,LOW);
}
 
void moveRight(){
  digitalWrite(mLeft1, HIGH);
  digitalWrite(mLeft2, LOW);
  digitalWrite(mRight1,LOW);
  digitalWrite(mRight2,LOW);
}
 
void moveForward(){
  digitalWrite(mLeft1, HIGH);
  digitalWrite(mLeft2, LOW);
  digitalWrite(mRight1, HIGH);
  digitalWrite(mRight2, LOW);
 
}

 void backward(){
  digitalWrite(mLeft2, HIGH);
  digitalWrite(mLeft1, LOW);
  digitalWrite(mRight2, HIGH);
  digitalWrite(mRight1, LOW);
 
}

void Stop(){
  digitalWrite(mLeft1, LOW);
  digitalWrite(mLeft2, LOW);
  digitalWrite(mRight1,LOW);
  digitalWrite(mRight2, LOW);
}
 
void setup() {
  // put your setup code here, to run once:
 
  digitalWrite(mLeft1, LOW);
  digitalWrite(mLeft2, LOW);
  digitalWrite(mRight1,LOW);
  digitalWrite(mRight2, LOW);
 
  sensorPin[0] = 22;
  sensorPin[1] = 23;
  sensorPin[2] = 24;
  sensorPin[3] = 25;
  sensorPin[4] = 26;
  sensorPin[5] = 27;
  sensorPin[6] = 28;
  sensorPin[7] = 29;
 
 
  weight[0] = -1;
  weight[1] = -1;
  weight[2] = -1;
  weight[3] = -1;
  weight[4] = 1;
  weight[5] = 1;
  weight[6] = 1;
  weight[7] = 1;
 
  for(int i=0; i<8; i++){
    pinMode(sensorPin[i], INPUT);
  }
 pinMode(mLeft, OUTPUT);
 pinMode(mLeft1, OUTPUT);
 pinMode(mLeft2, OUTPUT);
 pinMode(mRight, OUTPUT);
 pinMode(mRight1, OUTPUT);
 pinMode(mRight2, OUTPUT);
}
 
 
 
void loop() {
  // put your main code here, to run repeatedly:
  Wsum = 0;
  select=0;
  for(int i=0; i<8; i++){
    if(digitalRead(sensorPin[i])) {
      Wsum+=weight[i];
      select++;
    }
  }
 
  if(Wsum==0)
  moveForward();
  else if(Wsum<0) moveLeft();
  else if(Wsum>0) moveRight();
  if(select==0) backward();
  delay(100);
  analogWrite(mLeft,255);
  analogWrite(mRight,255);
 
 
 
/*
  // Checking for junction crossing, if juction detected,
  // keep moving forward
  if(digitalRead(4) && digitalRead(7))
  moveForward();
 
  // Checking for sensor number 1 and 2, if line detected, move left
  else if(digitalRead(3) || digitalRead(4))
  moveLeft();
 
  // Checking for sensor number 5 and 6, if line detected, move right
  else if(digitalRead(7) || digitalRead(8))
  moveRight();
 
  // Checking for sensors number 3 and 4,
  // if line is detected by either of these sensor, move forward
  else if(digitalRead(5) || digitalRead(6))
  moveForward();
 
  // If no line is detected, stay at the position
 
  // Put some delay to avoid the robot jig while making a turn
  delay(100);*/
 
}
