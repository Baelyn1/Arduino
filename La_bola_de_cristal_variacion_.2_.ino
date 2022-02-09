
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() { 
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("que dice");

  lcd.setCursor(0, 1);
  lcd.print("la bola");
}

  void loop() {
    switchState = digitalRead(switchPin);

    if (switchState != prevSwitchState) {
      if (switchState == LOW) {
        reply = random(8);

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Ordenador dice:");
        lcd.setCursor(0, 1);

        switch(reply){
          case 0:
          lcd.print("Windows XP malo");
          break;
          case 1:
          lcd.print("Mas Baterias +++");
          break;
          case 2:
          lcd.print("Programar");
          break;
          case 3:
          lcd.print("Ejecutar Program");
          break;
          case 4:
          lcd.print("Procesando...");
          break;
          case 5:
          lcd.print("Virus detectado");
          break;
          case 6:
          lcd.print("Error...Errorrr");
          break;
          case 7:
          lcd.print("Apagando");
          break;
        }
      }
    }
    prevSwitchState = switchState;
  }
