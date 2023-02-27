#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Signal.h"

class Triangle: public Signal
{
public:
	void CalculateSamples(int Amplitude, int DutyCycle);
};

#endif
