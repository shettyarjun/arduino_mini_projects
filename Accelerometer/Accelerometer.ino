#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Serial.println("Initialize MPU6050");

  while (!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(500);
  }
}

void loop() {
  Vector rawAccel = mpu.readRawAccel();
  Vector normAccel = mpu.readNormalizeAccel();

  Serial.print("Xraw = ");
  Serial.print(rawAccel.XAxis);

  Serial.print(" Yraw = ");
  Serial.print(rawAccel.YAxis);

  Serial.print(" Zraw = ");
  Serial.println(rawAccel.ZAxis);

  Serial.print("Xnorm = ");
  Serial.print(normAccel.XAxis);

  Serial.print(" Ynorm = ");
  Serial.print(normAccel.YAxis);

  Serial.print(" Znorm = ");
  Serial.println(normAccel.ZAxis);

  delay(1000);
}