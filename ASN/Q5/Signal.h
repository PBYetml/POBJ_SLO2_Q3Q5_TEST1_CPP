#ifndef SIGNAL_H
#define SIGNAL_H

class Signal
{
public:
	virtual void CalculateSamples(int Amplitude, int DutyCycle);

	virtual void DisplaySamples();

private:
	int GetSamplePeriod();

protected:
	int m_TableSamples[20];
	int m_SamplePeriod[];
};

#endif


