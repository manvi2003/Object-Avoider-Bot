byte motor[4] = {2,3,4,5};

byte sL = A1;

byte sR = A0;

int speed = 55;

 

void setup() {

//  pinMode(2, 3, 4, 5, OUTPUT);

  for(int i=0; i<4; i++){

    pinMode(motor[i], OUTPUT);

  }

  pinMode(9,OUTPUT);  //LEFT EN

  pinMode(10,OUTPUT); // RIGHT EN

  analogWrite(9, speed); analogWrite(10, speed);

  pinMode(sL, INPUT);

  pinMode(sR, INPUT);

}

 

int st = 0;

int count = 0;

 

void loop() {

  //if((digitalRead(sL) == 0) && (digitalRead(sR) == 0)){ fwd(); }

  if((digitalRead(sL) == 1) && (digitalRead(sR) == 0)){ right(); }

  else if((digitalRead(sL) == 0) && (digitalRead(sR) == 1)){ left(); }

  else if((digitalRead(sL)==1) && (digitalRead(sR) == 1)){stopp();}

  else if((digitalRead(sL) == 0) && (digitalRead(sR) == 0)){ fwd();}

}

 

void fwd(){

  digitalWrite(2,1); digitalWrite(3,0); //LEFT MOTOR - ACW

  digitalWrite(4,0); digitalWrite(5,1); //RIGHT MOTOR - CW

}

 

void left(){

  digitalWrite(2,0); digitalWrite(3,0); //LEFT MOTOR - STOP

  digitalWrite(4,0); digitalWrite(5,1); //RIGHT MOTOR - CW

}

 

void right(){

  digitalWrite(2,1); digitalWrite(3,0); //LEFT MOTOR - ACW

  digitalWrite(4,0); digitalWrite(5,0); //RIGHT MOTOR - STOP

}

 

void stopp(){

  digitalWrite(2,0); digitalWrite(3,0); //LEFT MOTOR - STOP

  digitalWrite(4,0); digitalWrite(5,0); //RIGHT MOTOR - STOP

}

 

void bwd(){

  digitalWrite(2,0); digitalWrite(3,1); //LEFT MOTOR - CW

  digitalWrite(4,1); digitalWrite(5,0); //RIGHT MOTOR - ACW

}
