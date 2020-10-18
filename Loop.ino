void loop() {
  delay(delayMS);

  sensors_event_t event;

  dht.temperature().getEvent(&event);
  if (!event.temperature) {
     Serial.println(F("Erro ao ler a temperatura!"));
  }
  else {
    Serial.print(F("Temperatura de: "));
    Serial.print(event.temperature);
    Serial.println(F("ºC"));
  }

  dht.humidity().getEvent(&event);
  if (!event.relative_humidity) {
    Serial.println(F("Erro ao ler a humidade!"));
  }
  else {
    Serial.print(F("Humidade de: "));
    Serial.print(event.relative_humidity);
    Serial.println(F("%"));
  }
} 
