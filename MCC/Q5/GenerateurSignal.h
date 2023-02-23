#ifndef GenerateurSignal_h
#define GenerateurSignal_h


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

 public:
};

#endif // GenerateurSignal_h
