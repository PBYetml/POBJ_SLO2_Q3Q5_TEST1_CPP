#ifndef Classe Signal_h
#define Classe Signal_h

#include "Class Signal.h"


class Classe Signal {
	
 Package:
 
	int m_TableEch[20];
	int m_PeriodeEchantillonage;

 public:
 
    void CalculerEchantillons(int Amplitude, int DutyCycle);
	void AfficherEchantillons();
	
 Private:
	
	int GetPeriodeEch();
	
 
	

};

#endif // Classe Triangle_h
