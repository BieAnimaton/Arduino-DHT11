#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define PinoDHT11 8
#define TipoDHT DHT11

DHT_Unified dht(PinoDHT11, TipoDHT);

uint32_t delayMS;
