#include <main.h>
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
