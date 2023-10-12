#include "main.h"
#include "ldr_main.h"
#include "pinSetup.h"
#include "init_components.h"

Spots ParkingSpot;

void setup() 
{
  //Serial.begin(115200);  
  initComponents();
}

void loop()
{
    ldr_main(ParkingSpot);
}
