#include <Wire.h>
#include "MAX30105.h"
#include "heartRate.h"

MAX30105 sensor;

int gsrPin = A0;
int tempPin = A1;

void setup() {
  Serial.begin(115200);
  sensor.begin(Wire, I2C_SPEED_FAST);
  sensor.setup();
}

void loop() {
  // PPG Sensor
  long irValue = sensor.getIR();
  long redValue = sensor.getRed();

  // GSR Sensor
  int gsrValue = analogRead(gsrPin);

  // Temperature Sensor (Any analog NTC)
  int tempRaw = analogRead(tempPin);
  float voltage = tempRaw * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;

  // Output as CSV
  Serial.print(irValue);
  Serial.print(",");
  Serial.print(redValue);
  Serial.print(",");
  Serial.print(gsrValue);
  Serial.print(",");
  Serial.println(temperatureC);

  delay(50);
}
