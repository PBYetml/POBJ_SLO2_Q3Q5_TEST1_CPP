#ifndef SIGNALGENERATOR_H
#define SIGNALGENERATOR_H

#include "Signal.h"

class SignalGenerator
{
public:
	SignalGenerator();

	int ChooseSignal();
	void ChooseFrequency();
	void ChooseAmplitude();

	~SignalGenerator();

private:
	int m_Frequency;
	int m_Amplitude;

	Signal mySignal;
};

#endif