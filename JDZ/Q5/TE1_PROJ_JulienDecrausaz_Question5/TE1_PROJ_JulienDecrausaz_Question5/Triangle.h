#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Signal.h"


class Triangle : public Signal {

	//Méthodes
	void CalculerEchantillons(int Amplitude, int DutyCycle);
};

#endif // !TRIANGLE_H