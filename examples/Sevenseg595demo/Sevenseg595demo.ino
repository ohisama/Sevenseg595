/* Demo

Demonstrates the use of the Sevenseg585 library with a 74HC595 shift register and 
a 7-Segment display.  

created on 16 8 2015
made by ohisamallc
*/

#include "Sevenseg595.h"

int sc = 12;
// shifte register, sc pin
int lc = 11;
// shift register, lc pin
int sd = 10;
// shift register, sd pin

Sevenseg595 seg;
// initialize the library

void setup()
{
	seg.registerPins(sc, lc, sd);
	seg.clear();
}
void loop()
{
	seg.disp('I');
	delay(500);
	seg.disp(' ');
	delay(500);
	seg.disp('L');
	delay(500);
	seg.disp('O');
	delay(500);
	seg.disp('V');
	delay(500);
	seg.disp('E');
	delay(500);
	seg.disp(' ');
	delay(500);
	seg.disp('Y');
	delay(500);
	seg.disp('O');
	delay(500);
	seg.disp('U');
	delay(500);
	seg.disp(' ');
	delay(500);
	seg.disp(' ');
	delay(500);
}
