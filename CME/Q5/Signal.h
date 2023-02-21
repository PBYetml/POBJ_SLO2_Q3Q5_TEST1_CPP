#ifndef Signal_h
#define Signal_h
#include "GenerateurSignal.h"

class Signal {

public:


	void CalculerEchantillons(int Amplitude, int Duty_cycle);
	void AfficherEchantillons();
	

	

protected:

	int m_TableEch[20];
	int m_PeriodeEchantillonage;

private:
	int GetPeriodeEch();

};

#endif // GenerateurSignal_h