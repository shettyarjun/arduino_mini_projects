#include<SoftwareSerial.h>
#define LIGHT 13
SoftwareSerial btm(2,3);
int index=0;
char data[10];
char c;
void setup(){
  pinMode(LIGHT,OUTPUT);
  digitalWrite(LIGHT,LOW);
  Serial.begin(9600);
  btm.begin(9600);
}
void loop(){
  if(btm.available()>0){
    while(btm.available()>0){
      c=btm.read();
      if(c=='0') digitalWrite(LIGHT,HIGH);
      else if(c=='1') digitalWrite(LIGHT,LOW);
      Serial.print(c+" ");
      delay(10);
    }
  }
}