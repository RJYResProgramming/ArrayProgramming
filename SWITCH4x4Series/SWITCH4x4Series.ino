//Interface of the Python program to the quad switch via the arduino
int incomingByte = 0;
String incomingWord = "";

void setup() {
  Serial.begin(9600);
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(22, LOW);
  digitalWrite(24, LOW);
  digitalWrite(26, LOW);
  digitalWrite(28, LOW);
  digitalWrite(30, LOW);
  digitalWrite(32, LOW);
  digitalWrite(34, LOW);
  digitalWrite(36, LOW);
  digitalWrite(38, LOW);
  digitalWrite(40, LOW);
  digitalWrite(42, LOW);
  digitalWrite(44, LOW);
  digitalWrite(46, LOW);
  digitalWrite(48, LOW);
  digitalWrite(50, LOW);
  digitalWrite(52, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
    incomingWord += char(incomingByte);
    Serial.println(incomingWord);
  } 
  if(incomingWord == "Z"){
    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);
    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(50, LOW);
    digitalWrite(52, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    incomingWord = "";
  }
    
  if(incomingWord == "A0"){
    digitalWrite(10, LOW);
    digitalWrite(28, HIGH);
    incomingWord = "";
  } else if(incomingWord == "A1"){
    digitalWrite(10, LOW);
    digitalWrite(22, HIGH);
    incomingWord = "";
  } else if(incomingWord == "A2"){
    digitalWrite(10, LOW);
    digitalWrite(24, HIGH);
    incomingWord = "";
  } else if(incomingWord == "A3"){
    digitalWrite(10, LOW);
    digitalWrite(26, HIGH);
    incomingWord = "";
  } else if(incomingWord == "B0"){
    digitalWrite(11, LOW);
    digitalWrite(36, HIGH);
    incomingWord = "";
  } else if(incomingWord == "B1"){
    digitalWrite(11, LOW);
    digitalWrite(30, HIGH);
    incomingWord = "";
  } else if(incomingWord == "B2"){
    digitalWrite(11, LOW);
    digitalWrite(32, HIGH);
    incomingWord = "";
  } else if(incomingWord == "B3"){
    digitalWrite(11, LOW);
    digitalWrite(34, HIGH);
    incomingWord = "";
  } else if(incomingWord == "C0"){
    digitalWrite(9, LOW);
    digitalWrite(44, HIGH);
    incomingWord = "";
  } else if(incomingWord == "C1"){
    digitalWrite(9, LOW);
    digitalWrite(38, HIGH);
    incomingWord = "";
  } else if(incomingWord == "C2"){
    digitalWrite(9, LOW);
    digitalWrite(40, HIGH);
    incomingWord = "";
  } else if(incomingWord == "C3"){
    digitalWrite(9, LOW);
    digitalWrite(42, HIGH);
    incomingWord = "";
  } else if(incomingWord == "D0"){
    digitalWrite(12, LOW);
    digitalWrite(52, HIGH);
    incomingWord = "";
  } else if(incomingWord == "D1"){
    digitalWrite(12, LOW);
    digitalWrite(46, HIGH);
    incomingWord = "";
  } else if(incomingWord == "D2"){
    digitalWrite(12, LOW);
    digitalWrite(48, HIGH);
    incomingWord = "";
  } else if(incomingWord == "D3"){
    digitalWrite(12, LOW);
    digitalWrite(50, HIGH);
    incomingWord = "";
  } 
}
