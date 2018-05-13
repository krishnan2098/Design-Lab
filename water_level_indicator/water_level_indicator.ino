void setup() {
  // put your setup code here, to run once:
  pinMode(11,INPUT);
  pinMode(10,INPUT);
  pinMode(12,INPUT);
  pinMode(9,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(9) == HIGH)           //LEVEL4
  {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
  }
  else if (digitalRead(10) == HIGH)     //LEVEL3
  {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
  }
  else if (digitalRead(11) == HIGH)     //LEVEL2
  {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
  }
  else if (digitalRead(12) == HIGH)     //LEVEL1
  {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
  }
  else                                //LEVEL0
  {
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
  }
}
