#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define BUTTON_PIN 7
#define BUZZER_PIN 8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Press Button");
  lcd.setCursor(0, 1);
  lcd.print("Normal Mode");
}

void loop() {

  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {   // Button pressed
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ALERT ON");
    lcd.setCursor(0, 1);
    lcd.print("Buzzer Active");

    digitalWrite(BUZZER_PIN, HIGH);
  }
  else {                      // Button not pressed
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Normal Mode");
    lcd.setCursor(0, 1);
    lcd.print("Waiting...");

    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(300);
}
