#ifndef GenerateurSignal_h
#define GenerateurSignal_h

#include "Signal.h"

class Utilisateur;

class GenerateurSignal {

 public:

    int ChoisirSignal();

    void ChoisirFrequence();

    void ChoisirAmplitude();


 private:
    int m_Frequence;
    int m_Amplitude;

 public:

    /**
     * @element-type Signal
     */
    Signal *mySignal;

    /**
     * @element-type Utilisateur
     */
    Utilisateur *myUtilisateur;

    /**
     * @element-type Signal
     */
    Signal mySignal;

    /**
     * @element-type Signal
     */
    Signal *mySignal;

    /**
     * @element-type Signal
     */
    Signal mySignal;

    /**
     * @element-type Signal
     */
    Signal *mySignal;
};

#endif // GenerateurSignal_h
