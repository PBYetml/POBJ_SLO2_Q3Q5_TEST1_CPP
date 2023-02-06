#ifndef Signal_h
#define Signal_h

#include "GenerateurSignal.h"


class Signal {

 public:

    int CalculerEchantillons(int Amplitude, int DutyCycle);

    void AfficherEcantillons();

 private:

    int GetPeriodeEch();


 protected:
    int m_tableEch[20];
    int m_PeriodeEchantillonage;

 public:

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal myGenerateurSignal;

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal myGenerateurSignal;
};

#endif // Signal_h
