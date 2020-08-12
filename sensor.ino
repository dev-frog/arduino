#include <OzIDManager.h>
#include <OzLcdDisplayController.h>
 
// global pointers
OzIDManager* manager;
OzLcdController* lcdController;
 
const int backlight_pin = 3;
const int RS = 6;
const int RW = 7;
const int EN = 8;
const int D4 = 9;
const int D5 = 10;
const int D6 = 11;
const int D7 = 12;
 
void setup()
{
  Serial.begin(115200);
 
  manager = new OzIDManager;
  manager->_sendACK = true;
  manager->_checksum = true;
   
  OzCommunication::setIDManager(manager);
  lcdController = new OzLcdController(RS, RW, EN, D4, D5, D6, D7);
  lcdController->SetBacklight(backlight_pin, 100); //100% backlight
 
  int x=1;
  manager->sendLinkSetup();
  manager->PrintWelcomeLine(lcdController, x++, "MyLCD");
  lcdController->LoginDisplaySize(16, 2);
}
 
void loop()
{
  OzCommunication::communicate();
}