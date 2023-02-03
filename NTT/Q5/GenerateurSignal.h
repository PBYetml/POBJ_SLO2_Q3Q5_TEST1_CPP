#ifdnef GenerateurSignal_h
#define GenerateurSignal_h

class Signal;

class GenerateurSignal {
	
	private : 
	
		int m_Frequence;
		int m_amplitude;
		
	package : 
	
		void CalculerEchantillons(int Amplitude, int DutyCycle);
		void AfficherEchantillons();
		void GetPeriodEch();
	
	package : 
	
		int m_TableEch[20];
		int m_PeriodeEchantillonage;
		
	package :
		
		GenerateurSignal *myGenerateurSignal;
	
};

#endif // GenerateurSignal_h