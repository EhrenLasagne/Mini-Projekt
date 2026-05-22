int analogPin = A0; // Analoger Pin, an dem die Spannung anliegt
int KondPin = A1;  // Analoger Pin für die Spannung am Kondensator Pin
void setup() {
  Serial.begin(9600); // Serielle Kommunikation starten
  pinMode(13,HIGH);
  pinMode(12,HIGH);
  pinMode(11,HIGH);



}

void loop() {

  int Wert = analogRead(analogPin); // Wert zwischen 0 und 1023 auslesen
  float voltage = (Wert / 1023.0) * 5;   // Umrechnung des digitalen Werts in die tatsächliche Spannung
  
  int WertK = analogRead(KondPin); // Wert zwischen 0 und 1023 auslesen
  float voltageK = (WertK / 1023.0) * 5; // Umrechnung des digitalen Werts in die tatsächliche Spannung


  WerteSchreiben();

  delay(500); // 0,5 Sekunden warten

if(voltage<=0.7 && voltage>=0.3){
digitalWrite(11,0);
digitalWrite(12,0);
digitalWrite(13,1);
Serial.println("Wenig Spannung rotes Licht");
}

if(voltage>=0.7 && voltage<=1.5){
digitalWrite(11,0);
digitalWrite(12,1);
digitalWrite(13,0);
Serial.println("Mittlere Spannung gelbes Licht");
}

if(voltage>=1.5){
digitalWrite(11,1);
digitalWrite(12,0);
digitalWrite(13,0);
Serial.println("Viel Spannung grünes Licht");
}

if(voltage<0.3){
  digitalWrite(11,0);
digitalWrite(12,0);
digitalWrite(13,1);
delay(500);
WerteSchreiben();
digitalWrite(13,0);
delay(500);
WerteSchreiben();
  int Wert = analogRead(analogPin); // Wert zwischen 0 und 1023 auslesen
  float voltage = (Wert / 1023.0) * 5;   
Serial.println("Bruder hier ist nix es blinkt jzt");


}

}






void WerteSchreiben(){

  int Wert = analogRead(analogPin); // Wert zwischen 0 und 1023 auslesen
  float voltage = (Wert / 1023.0) * 5;   // Umrechnung des digitalen Werts in die tatsächliche Spannung
  
  int WertK = analogRead(KondPin); // Wert zwischen 0 und 1023 auslesen
  float voltageK = (WertK / 1023.0) * 5; // Umrechnung des digitalen Werts in die tatsächliche Spannung

 Serial.print("Wert des Solarmoduls: ");
  Serial.print(Wert);
  Serial.print(" | Spannung: ");
  Serial.print(voltage);
  Serial.print(" V");
Serial.print("    ");
  Serial.print("Wert des Kondensators: ");
  Serial.print(WertK);
  Serial.print(" | Spannung: ");
  Serial.print(voltageK);
  Serial.println(" V");

}

void WerteLesen(){
  int Wert = analogRead(analogPin); // Wert zwischen 0 und 1023 auslesen
  float voltage = (Wert / 1023.0) * 5;   // Umrechnung des digitalen Werts in die tatsächliche Spannung
  
  int WertK = analogRead(KondPin); // Wert zwischen 0 und 1023 auslesen
  float voltageK = (WertK / 1023.0) * 5; // Umrechnung des digitalen Werts in die tatsächliche Spannung

}