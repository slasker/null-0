//-------Electronics-project-hub.com---------//
//---- display de 7 segmentos
#include "SevSeg.h"
SevSeg Display;
unsigned int number = 1207; // puedo establecer desde donde parte el conteo.
const unsigned long period = 3600000; // in millisecond, controla el tiempo entre intervalo de cada numero, 1 hora = 3600000 milisegundos
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
      Display.setChars("nul0");
      Display.refreshDisplay();
      tone(A1, 300+i);
      delay(50);
      
    }

  }

  //esto se lo añadi yo para un pequeño sonido

  if (number > 1)
  { tone(A1, 200 - period/15000); //play tone
    delay(10);
    noTone(A1);
    delay(10);

  }

  Display.refreshDisplay();


}



//-------Electronics-project-hub.com---------//
