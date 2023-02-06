#ifndef GenerateurSignal_h
#define GenerateurSignal_h

#include "Utilisateur.h"

class Signal;

class GenerateurSignal : public Utilisateur {

 public:

    int ChoisirSignal();

    void ChoisirFrequence();

    void ChoisirAmplitude();


 private:
    int m_Frequence;
    int m_Aplitude;

 public:

    /**
     * @element-type Signal
     */
    Signal *mySignal;

    /**
     * @element-type Signal
     */
    Signal *mySignal;

    /**
     * @element-type Utilisateur
     */
    Utilisateur *myUtilisateur;
};

#endif // GenerateurSignal_h
