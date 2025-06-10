//-------Electronics-project-hub.com---------//
#include "SevSeg.h"
SevSeg Display;
unsigned int number = 0;
const unsigned long period = 250; // in millisecond
unsigned long startMillis;
unsigned long currentMillis;
void setup()
{
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
  bool resistorsOnSegments = true;
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE;
  Display.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  Display.setBrightness(100);
}
void loop()
{
  currentMillis = millis();
  if (currentMillis - startMillis >= period)
  {
    number = number + 1;
    startMillis = currentMillis;
  }
  if (number >= 100)
  {
    number  = 0;
  }
  Display.setNumber(number);
  Display.refreshDisplay();
}
//-------Electronics-project-hub.com---------//
