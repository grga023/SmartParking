#include "ldr_main.h"
#include "pinSetup.h"
#include "ledSetup.h"

void ldr_main( Spots ParkingSpot )
{
    analogRead(LDR0) < THRESHOLD ? ( ParkingSpot[0] = b_TRUE ) : ( ParkingSpot[0] = b_FALSE );
    analogRead(LDR1) < THRESHOLD ? ( ParkingSpot[1] = b_TRUE ) : ( ParkingSpot[1] = b_FALSE );
    analogRead(LDR2) < THRESHOLD ? ( ParkingSpot[2] = b_TRUE ) : ( ParkingSpot[2] = b_FALSE );
    analogRead(LDR3) < THRESHOLD ? ( ParkingSpot[3] = b_TRUE ) : ( ParkingSpot[3] = b_FALSE );

    controlDiode( ParkingSpot );
}

void controlDiode( Spots ParkingSpot )
{
    for( int i = 0; i < 4; i++ )
    {
        ParkingSpot[i] == b_TRUE ? (setRed(i, b_FALSE), setGreen(i, b_TRUE)) : (setRed(i, b_TRUE), setGreen(i, b_FALSE));
    }
}

