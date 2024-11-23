#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Merhaba Rootninjaa");
  lcd.setCursor(0, 1);
  delay(2000);

  lcd.clear();
}
