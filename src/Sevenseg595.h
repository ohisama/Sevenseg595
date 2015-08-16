#ifndef Sevenseg595_h
#define Sevenseg595_h

#if ARDUINO >= 100	 // Arduino 1.0 and 0023 compatible!
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Sevenseg595
{
public:
	uint8_t registerPins(int sc, int lc, int sd);
	void disp(byte data);
	void clear();
private:
	int _sc;
	int _lc;
	int _sd;
};
#endif