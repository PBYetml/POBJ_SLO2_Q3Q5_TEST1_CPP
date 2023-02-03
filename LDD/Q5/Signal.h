#ifndef Signal_h
#define Signal_h

#include "GenerateurSignal.h"


class Signal : public GenerateurSignal {

 public:

    void CalculerEchantillons(int Amplitude, int DutyCycle);

    void AfficherEchantillons();

 private:

    int GetPeriodeEch();


 private:
    int m_TableEch[20];
    int m_PeriodeEchantillonage;
};

#endif // Signal_h
