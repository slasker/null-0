//-------Electronics-project-hub.com---------//
#include "SevSeg.h"
SevSeg Display;
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
  Display.setNumber(2666);
  Display.refreshDisplay();
}
//-------Electronics-project-hub.com---------//
