//-------Electronics-project-hub.com---------//
#include "SevSeg.h"
SevSeg Display;
unsigned int number = 18; // puedo establecer desde donde parte el conteo, días que faltan para el plebiscito

const unsigned long period = 360; // in millisecond, controla el tiempo entre intervalo de cada numero, 1 hora = 3600000 milisegundos
unsigned long startMillis;
unsigned long currentMillis;
void setup()
{
  Serial.begin(9600);
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
  bool resistorsOnSegments = true;
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE;
  Display.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  Display.setBrightness(100);
  Display.setNumber(number);
}
void loop()
{
  currentMillis = millis();

  //number  = 10;
  if (currentMillis - startMillis >= period)
  {
    number = number - 1;
    startMillis = currentMillis;
    Display.setNumber(number);

  }
  if (number <= 1)
  {
    for (int i = period; i > 1; i-- ) {
      Display.setChars("Nulo");
      Display.refreshDisplay();
      delay(50);
    }

  }

  Display.refreshDisplay();


}




void fin() {
  if (number < 0 ) {
    Display.setChars("null");
    Display.refreshDisplay();
  }
}
//-------Electronics-project-hub.com---------//
