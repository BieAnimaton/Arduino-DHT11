void setup() {
  Serial.begin(9600);

  dht.begin(); // inicia o dispositivo
  Serial.println(F("Registros do sensor DHT11"));

  sensor_t sensor;
  dht.temperature().getSensor(&sensor);
  Serial.println(F("Sensor de temperatura"));
  Serial.print(F("Tipo de sensor:         "));  Serial.println(sensor.name);
  Serial.print(F("Valor máximo:           "));  Serial.print(sensor.max_value); Serial.println(F("ºC"));
  Serial.print(F("Valor mínimo:           "));  Serial.print(sensor.min_value); Serial.println(F("ºC"));
  Serial.print(F("Valor de resolução:     "));  Serial.print(sensor.resolution);  Serial.println(F("ºC"));

  dht.humidity().getSensor(&sensor);
  Serial.println(F("Sensor de humidade"));
  Serial.print(F("Tipo de sensor:         "));  Serial.println(sensor.name);
  Serial.print(F("Valor máximo:           "));  Serial.print(sensor.max_value); Serial.println(F("%"));
  Serial.print(F("Valor mínimo:           "));  Serial.print(sensor.min_value); Serial.println(F("%"));
  Serial.print(F("Valor de resolução:     "));  Serial.print(sensor.resolution);  Serial.println(F("%"));

  delayMS = sensor.min_delay / 1000;
}
