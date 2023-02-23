#ifndef SIGNALGENERATOR_H
#define SIGNALGENERATOR_H

class SignalGenerator
{
public:
	int ChooseSignal();
	void ChooseFrequency();
	void ChooseAmplitude();

private:
	int m_Frequency;
	int m_Amplitude;
};

#endif