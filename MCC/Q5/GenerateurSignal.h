#ifndef GenerateurSignal_h
#define GenerateurSignal_h

#include <Signal.h>


class GenerateurSignal {

 public:
	
    GenerateurSignal();

    int ChoisirSignal();

    void ChoisirFrequence();

    void ChoisirAmplitude();
	
    ~GenerateurSignal();
	
private:
 
	int m_Frequence;
	
	int m_Amplitude;
	
	Signal Signal;

 public:
};

#endif // GenerateurSignal_h
