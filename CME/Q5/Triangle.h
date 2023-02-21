#ifndef Triangle_h
#define Triangle_h
#include "Signal.h"


class Triangle : public Signal
{

public:

	void CalculerEchantillons(int Amplitude, int Duty_Cycle);
};

#endif // Triangle_h
