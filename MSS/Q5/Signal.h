#ifndef Signal_h
#define Signal_h

class Signal
{
	public:
		virtual void CalculerEchantillons(int Amplitude, int DutyCycle);
		void AfficherEchantillons();

	private:
		int GetPeriodeEch();

	protected:
		int m_TableEch[20];
		int m_PeriodeEchantillonage;
	

};

#endif // !Signal_h

