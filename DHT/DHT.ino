#include"DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  delay(2000);
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  if(isnan(h)||isnan(t)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.println("Humidity: "+String(h));
  Serial.println("Temperature: "+String(t)+"*C");
}