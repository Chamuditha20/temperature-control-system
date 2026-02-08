#include <LiquidCrystal.h>

// --- Pin Definitions ---
const int sensorPin = A0;      // LM35 Input
const int motorPin = 9;        // Fan Control (Transistor Base)
const int tempThreshold = 30;  // Temperature to turn fan ON

// Initialize LCD (RS, E, D4, D5, D6, D7)
// Make sure this matches your wiring exactly!
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up pins
  pinMode(motorPin, OUTPUT);
  
  // Set up LCD
  lcd.begin(16, 2);
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
}

void loop() {
  // 1. Read Temperature from LM35
  int reading = analogRead(sensorPin);
  
  // Convert reading to Voltage (5V reference, 1024 resolution)
  float voltage = reading * (5.0 / 1024.0);
  
  // Convert Voltage to Celsius (LM35 scales 10mV per degree)
  float tempC = voltage * 100;

  // 2. Display on LCD
  lcd.setCursor(0, 0); // Top row
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print(" C  "); // Extra spaces to clear old numbers

  // 3. Control Fan Logic
  lcd.setCursor(0, 1); // Bottom row
  if (tempC > tempThreshold) {
    digitalWrite(motorPin, HIGH); // Turn Fan ON
    lcd.print("Fan: ON ");
  } else {
    digitalWrite(motorPin, LOW);  // Turn Fan OFF
    lcd.print("Fan: OFF");
  }
  
  delay(500); // Update every half second
}