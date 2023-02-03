#ifndef GenerateurSignal_h
#define GenerateurSignal_h

#include "Signal.h"

class GenerateurSignal : private Signal
{
	public:
		int ChoisirSignal();
		void ChoisirFrequence();
		void ChoisirAmplitude();

	private:
		int m_Frequence;
		int m_Amplitude;
};

#endif // !GenerateurSignal_h
