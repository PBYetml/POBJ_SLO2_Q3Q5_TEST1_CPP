#ifndef GenerateurSignal_h
#define GenerateurSignal_h


class GenerateurSignal {

 public:

    int ChoisirSignal();

    void ChoisirFrequence();

    void ChoisirAmplitude();
	
private:
 
	int m_Frequence;
	
	int m_Amplitude;

 public:
};

#endif // GenerateurSignal_h
