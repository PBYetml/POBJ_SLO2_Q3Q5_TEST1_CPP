#ifndef Signal_h
#define Signal_h

#include ".h"

class GenerateurSignal;

class Signal : public  {

 public:

    void CalculerEchantillon(int Amplitude, int DutyCycle);

    void AfficherEchantillon();

 private:

    virtual int GetPeriodeEch();


 private:
    int m_TableEch[20];
    int m_PeriodeEchantillonnage;

 public:

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;
};

#endif // Signal_h
