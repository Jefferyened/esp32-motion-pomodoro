#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Initializing MPU6050....");

  Wire.begin(21,22); // I2C pins for ESP32,(SDA @ pin-21 and SCL @ pin-22)
  
  if (!mpu.begin()) { 
    Serial.println("Couldn't connect MPU6050.");
    while (1) {
      delay(10); // in milli seconds
    }
  }
  Serial.println("MPU6050 connected, everything is working so far.");
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

}

void loop (){

}