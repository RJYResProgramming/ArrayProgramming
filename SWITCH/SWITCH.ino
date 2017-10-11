//Interface of the Python program to the quad switch via the arduino
int incomingByte = 0;
String incomingWord = "";

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);//D
  pinMode(3, OUTPUT);//C
  pinMode(4, OUTPUT);//B
  pinMode(5, OUTPUT);//A
  pinMode(6, OUTPUT);//!E
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    incomingWord += char(incomingByte);
    Serial.println(incomingWord);
  }
  if(incomingWord == "A0"){
      digitalWrite(5, LOW);
      incomingWord = "";
  } else if(incomingWord == "A1"){
      digitalWrite(5, HIGH);
      incomingWord = "";
  } else if(incomingWord == "B0"){
      digitalWrite(4, LOW);
      incomingWord = "";
  } else if(incomingWord == "B1"){
      digitalWrite(4, HIGH);
      incomingWord = "";
  } else if(incomingWord == "C0"){
      digitalWrite(3, LOW);
      incomingWord = "";
  } else if(incomingWord == "C1"){
      digitalWrite(3, HIGH);
      incomingWord = "";
  } else if(incomingWord == "D0"){
      digitalWrite(2, LOW);
      incomingWord = "";
  } else if(incomingWord == "D1"){
      digitalWrite(2, HIGH);
      incomingWord = "";
  } 
}
