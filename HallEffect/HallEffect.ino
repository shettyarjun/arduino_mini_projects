void setup(){
  Serial.begin(9600);
}
void loop(){
  int value=analogRead(A0);
  float sensitivity=0.0769;
  float vZeroCurrent=(504*4.85)/1023;
  float vUnknownCurrent=(value*4.85)/1023;
  float current=(vUnknownCurrent-vZeroCurrent)/sensitivity;
  Serial.println(analogRead(A0));
  Serial.println(current);
  delay(666);
}

