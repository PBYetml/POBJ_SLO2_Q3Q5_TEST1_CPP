#ifdnef Signal_h
#define Signal_h

class Signal{
		
	protected :
	
		int m_TableEch[20];
		int m_PeriodeEchantillonage;
		
	private :
	
		int GetPeriodeEch();
		
	public :
	
		void CalculerEchantillons(int Amplitude, int DutyCycle);
		void AfficherEchantillons();
	
	
};

#endif // Signal_h