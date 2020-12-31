// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library

#include "DHT.h"

#define DHTPIN 2 // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT Test!"));

  dht.begin();
}

void loop(){
  delay(250);

  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Celsius (default)
  float f = dht.readTemperature(true); //isFahrenheit=true

if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%\tTemperature: "));
  Serial.print(t);
  Serial.print(F("°C\t"));
  Serial.print(f);
  Serial.println(F("°F"));
}
