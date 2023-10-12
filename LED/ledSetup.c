#include "ledSetup.h"
#include "pinSetup.h"


const int DIODE_G[] = { LED0_G, LED1_G, LED2_G, LED3_G};
const int DIODE_R[] = { LED0_R, LED1_R, LED2_R, LED3_R};

void setLed(int diode, int state)
{
    digitalWrite(diode, state);
}

void setRed(int diode, boolean isOn)
{
    isOn == b_FALSE ? (digitalWrite(DIODE_R[diode], HIGH)) : (digitalWrite(DIODE_R[diode], LOW));
}

void setGreen(int diode, boolean isOn)
{
    isOn == b_FALSE ? (digitalWrite(DIODE_G[diode], HIGH)) : (digitalWrite(DIODE_G[diode], LOW));
}
