const int trigger = 12;
const int echo = 13;
const int buzzer = 8;
const int ledmerah = 2;
const int ledkuning = 3;
const int ledhijau = 4;

int jarak;
unsigned long durasi;

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledmerah, OUTPUT);
  pinMode(ledkuning, OUTPUT);
  pinMode(ledhijau, OUTPUT);

  // Pastikan buzzer mati saat pertama kali nyala (Active-Low = HIGH)
  digitalWrite(buzzer, HIGH); 
}

void loop() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  durasi = pulseIn(echo, HIGH);
  jarak = (durasi / 2.0) * 0.034766;

  if (jarak >= 1 && jarak <= 10) {
    // Zona 1 (<= 10 cm): Merah Kedip Super Cepat
    digitalWrite(ledkuning, LOW);
    digitalWrite(ledhijau, LOW);
    
    digitalWrite(buzzer, LOW);   // Bunyi
    digitalWrite(ledmerah, HIGH);
    delay(850);
    digitalWrite(buzzer, HIGH);  // Mati
    digitalWrite(ledmerah, LOW);
    delay(100);
  } 
  else if (jarak > 10 && jarak <= 25) {
    // Zona 2 (10 - 25 cm): Merah Kedip Cepat
    digitalWrite(ledkuning, LOW);
    digitalWrite(ledhijau, LOW);
    
    digitalWrite(buzzer, LOW);   // Bunyi
    digitalWrite(ledmerah, HIGH);
    delay(100);
    digitalWrite(buzzer, HIGH);  // Mati
    digitalWrite(ledmerah, LOW);
    delay(100); 
  } 
  else if (jarak > 25 && jarak <= 50) {
    // Zona 3 (25 - 50 cm): Kuning Kedip Sedang
    digitalWrite(ledmerah, LOW);
    digitalWrite(ledhijau, LOW);

    digitalWrite(buzzer, LOW);   // Bunyi
    digitalWrite(ledkuning, HIGH);
    delay(150);
    digitalWrite(buzzer, HIGH);  // Mati
    digitalWrite(ledkuning, LOW);
    delay(250);
  } 
  else if (jarak > 50 && jarak <= 80) {
    // Zona 4 (50 - 80 cm): Hijau Kedip Santai
    digitalWrite(ledmerah, LOW);
    digitalWrite(ledkuning, LOW);

    digitalWrite(buzzer, LOW);   // Bunyi
    digitalWrite(ledhijau, HIGH);
    delay(135);
    digitalWrite(buzzer, HIGH);  // Mati
    digitalWrite(ledhijau, LOW);
    delay(800);
  } 
  else {
    // Zona 5 (> 80 cm atau 0 cm): Luar Jangkauan / Kosong (SEMUA MATI)
    digitalWrite(buzzer, HIGH); 
    digitalWrite(ledmerah, LOW);
    digitalWrite(ledkuning, LOW);
    digitalWrite(ledhijau, LOW);
  }
}
