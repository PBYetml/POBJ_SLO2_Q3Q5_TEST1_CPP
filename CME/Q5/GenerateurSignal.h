#ifndef GenerateurSignal_h
#define GenerateurSignal_h


class GenerateurSignal {

public:

	
	int ChoisirSignal();
	void ChoisirFrequence();
	void ChoisirAmplitude();

protected:

private:
	int m_Frequence;
	int m_Amplitude;
	

};

#endif // GenerateurSignal_h