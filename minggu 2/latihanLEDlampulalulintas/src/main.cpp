#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu1 = 25;
int lampu3 = 27;
int lampu2 = 26;

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("Traffic Light");

    // Atur pin sebagai OUTPUT
    pinMode(lampu1, OUTPUT);
    pinMode(lampu3, OUTPUT);
    pinMode(lampu2, OUTPUT);
}

void loop() {
    // Lampu Merah
    digitalWrite(lampu1, HIGH);
    Serial.println("Lampu Merah Hidup");
    delay(2000); // Tunggu 2 detik

    digitalWrite(lampu1, LOW);
    Serial.println("Lampu Merah Mati");
    delay(2000); // Tunggu 2 detik

    // Lampu Hijau
    digitalWrite(lampu3, HIGH);
    Serial.println("Lampu Hijau Hidup");
    delay(2000); // Tunggu 2 detik

    digitalWrite(lampu3, LOW);
    Serial.println("Lampu Hijau Mati");
    delay(2000); // Tunggu 2 detik

    // Lampu Kuning
    digitalWrite(lampu2, HIGH);
    Serial.println("Lampu Kuning Hidup");
    delay(500); // Tunggu 0,5 detik

    digitalWrite(lampu2, LOW);
    Serial.println("Lampu Kuning Mati");
    delay(500); // Tunggu 0,5 detik
}
