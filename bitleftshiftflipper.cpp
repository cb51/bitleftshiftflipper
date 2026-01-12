// Do not remove the include below
#include "bitleftshiftflipper.h"


//The setup function is called once at startup of the sketch
void setup( ) {

	Serial.begin( brate );

}

// The loop function is called in an endless loop
void loop( ) {

	Serial.println( bflipper, BIN );

	bflipper *= 2;

	delay( dtime );

}
