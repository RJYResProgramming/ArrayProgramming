//Interface of the Python program to the quad switch via the arduino
int incomingByte = 0;
String incomingWord = "";
const int switchA = 38;
const int switchB = 39;
const int switchC = 40;
const int switchD = 41;
const int switchE = 42;
const int switchF = 43;
const int switchG = 44;
const int switchH = 45;
const int switchI = 46;
const int switchJ = 47;
const int switchK = 48;
const int switchL = 49;
const int switchM = 50;
const int switchN = 51;
const int switchO = 52;
const int switchP = 53;

void setup() {
  Serial.begin(9600);
  pinMode(switchA, OUTPUT);
  pinMode(switchB, OUTPUT);
  pinMode(switchC, OUTPUT);
  pinMode(switchD, OUTPUT);
  pinMode(switchE, OUTPUT);
  pinMode(switchF, OUTPUT);
  pinMode(switchG, OUTPUT);
  pinMode(switchH, OUTPUT);
  pinMode(switchI, OUTPUT);
  pinMode(switchJ, OUTPUT);
  pinMode(switchK, OUTPUT);
  pinMode(switchL, OUTPUT);
  pinMode(switchM, OUTPUT);
  pinMode(switchN, OUTPUT);
  pinMode(switchO, OUTPUT);
  pinMode(switchP, OUTPUT);
  digitalWrite(switchA, OUTPUT);
  digitalWrite(switchB, OUTPUT);
  digitalWrite(switchC, OUTPUT);
  digitalWrite(switchD, OUTPUT);
  digitalWrite(switchE, OUTPUT);
  digitalWrite(switchF, OUTPUT);
  digitalWrite(switchG, OUTPUT);
  digitalWrite(switchH, OUTPUT);
  digitalWrite(switchI, OUTPUT);
  digitalWrite(switchJ, OUTPUT);
  digitalWrite(switchK, OUTPUT);
  digitalWrite(switchL, OUTPUT);
  digitalWrite(switchM, OUTPUT);
  digitalWrite(switchN, OUTPUT);
  digitalWrite(switchO, OUTPUT);
  digitalWrite(switchP, OUTPUT);
  digitalWrite(6, LOW);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    incomingWord += char(incomingByte);
    Serial.println(incomingWord);
  }
  //Switch P 2^15
  if((incoming - 32768) >= 0){
    digitalWrite(switchP,HIGH);
    incoming = incoming - 32768;
    quadState += "P1";}
  else {digitalWrite(switchP,LOW);
  quadState += "P0";}
   
   //Switch P 2^14
  if((incoming - 16384) >= 0){
    digitalWrite(switchO,HIGH);
    incoming = incoming - 16384;
    quadState += "O1";}
  else {digitalWrite(switchO,LOW);
  quadState += "O0";}
   
   //Switch P 2^13
  if((incoming - 8192) >= 0){
    digitalWrite(switchN,HIGH);
    incoming = incoming - 8192;
    quadState += "N1";}
  else {digitalWrite(switchN,LOW);
  quadState += "NO";} 
   
   //Switch M 2^12 
  if((incoming - 4096) >= 0){
    digitalWrite(switchM,HIGH);
    incoming = incoming - 4096;
    quadState += "M1";}
  else {digitalWrite(switchM,LOW);
  quadState += "M0";}
   
   //Switch L 2^11
  if((incoming - 2048) >= 0){
    digitalWrite(switchL,HIGH);
    incoming = incoming - 2048;
    quadState += "L1";}
  else {digitalWrite(switchL,LOW);
  quadState += "L0";}
  
   //Switch K 2^10
  if((incoming - 1024) >= 0){
    digitalWrite(switchK,HIGH);
    incoming = incoming - 1024;
    quadState += "K1";}
  else {digitalWrite(switchK,LOW);
  quadState += "K0";}
  
  //Switch J 2^9
  if((incoming - 512) >= 0){
    digitalWrite(switchJ,HIGH);
    incoming = incoming - 512;
    quadState += "J1";}
  else {digitalWrite(switchJ,LOW);
  quadState += "JO";}
  
   //Switch I 2^8
  if((incoming - 256) >= 0){
    digitalWrite(switchI,HIGH);
    incoming = incoming - 256;
    quadState += "I1";}
  else {digitalWrite(switchI,LOW);
  quadState += "I0";}
  
   //Switch H 2^7
  if((incoming - 128) >= 0){
    digitalWrite(switchH,HIGH);
    incoming = incoming - 128;
    quadState += "H1";}
  else {digitalWrite(switchH,LOW);
  quadState += "H0";}
  
   //Switch G 2^6
  if((incoming - 64) >= 0){
    digitalWrite(switchG,HIGH);
    incoming = incoming - 64;
    quadState += "G1";}
  else {digitalWrite(switchG,LOW);
  quadState += "G0";}
  
   //Switch F 2^5
  if((incoming - 32) >= 0){
    digitalWrite(switchF,HIGH);
    incoming = incoming - 32;
    quadState += "F1";}
  else {digitalWrite(switchF,LOW);
  quadState += "FO";}
   
   //Switch E 2^4
  if((incoming - 16) >= 0){
    digitalWrite(switchE,HIGH);
    incoming = incoming - 16;
    quadState += "E1";}
  else {digitalWrite(switchE,LOW);
  quadState += "E0";}
   
   //Switch D 2^3
  if((incoming - 8) >= 0){
    digitalWrite(switchD,HIGH);
    incoming = incoming - 8;
    quadState += "D1";}
  else {digitalWrite(switchD,LOW);
  quadState += "D0";}
  
   //Switch C 2^2
  if((incoming - 4) >= 0){
    digitalWrite(switchC,HIGH);
    incoming = incoming - 4;
    quadState += "C1";}
  else {digitalWrite(switchC,LOW);
  quadState += "C0";}
  
   //Switch B 2^1
  if((incoming - 2) >= 0){
    digitalWrite(switchB,HIGH);
    incoming = incoming - 2;
    quadState += "B1";}
  else {digitalWrite(switchB,LOW);
  quadState += "BO";}
  
   //Switch A 2^0
  if((incoming - 1) >= 0){
    digitalWrite(switchA,HIGH);
    incoming = incoming - 1;
    quadState += "A1";}
  else {digitalWrite(switchD,LOW);
  quadState += "A0";}
  
  Serial.println(quadState);
}
