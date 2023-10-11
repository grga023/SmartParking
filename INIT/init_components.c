#include <init_components.h>

void initLeds()
{
    for(int i = 0; i < 8; i ++ )
    {
        setLed(i, HIGH);
        usleep(5000);
        setLed(i, LOW);
    }
}

void initComponents()
{
    initLeds();
}