int analogPin = A5; // Analoger Pin, an dem die Spannung anliegt

void setup() {
  Serial.begin(9600); // Serielle Kommunikation starten
}

void loop() {
  int Wert = analogRead(analogPin); // Wert zwischen 0 und 1023 auslesen
  
  // Umrechnung des digitalen Werts in die tatsächliche Spannung
  float voltage = (sensorValue / 1023.0) * 5; 
  
  // Ausgabe der Spannung im Serial Monitor
  Serial.print("Wert: ");
  Serial.print(Wert);
  Serial.print(" | Spannung: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  delay(500); // 0,5 Sekunden warten
}
