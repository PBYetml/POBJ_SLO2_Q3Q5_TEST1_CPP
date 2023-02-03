#ifndef Triangle_h
#define Triangle_h

#include "Signal.h"

class Triangle : Signal
{
	public:
		void CalculerEchantillons(int Amplitude, int DutyCycle);
};

#endif // !Triangle_h

