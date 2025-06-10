//-------Electronics-project-hub.com---------//
#include "SevSeg.h"
SevSeg Display;
unsigned int number = 18; // puedo establecer desde donde parte el conteo, horas que faltan para el plebiscito
const unsigned long period = 1000; // in millisecond, controla el tiempo entre intervalo de cada numero, 1 hora = 3600000 milisegundos
unsigned long startMillis;
unsigned long currentMillis;
void setup()
{
  Serial.begin(9600);
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {6, 5, 4, 3, 2, 7, 8};
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
      tone(A1, 300+i);
      delay(50);
      
    }

  }

  if (number > 1)
  { tone(A1, 200-number*12); //play tone
    delay(10);
    noTone(A1);
    delay(10);

  }

  Display.refreshDisplay();


}



//-------Electronics-project-hub.com---------//
