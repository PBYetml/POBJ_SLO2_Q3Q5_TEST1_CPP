#ifndef GenerateurSignal_h
#define GenerateurSignal_h

class Utilisateur;
class Signal;

class GenerateurSignal {

 public:

    int ChoisirSignal();

    void ChoisirFrequence();

    void ChoisirAmplitude();


 protected:
    int m_Frequence;
    int m_Amplitude;

 public:

    /**
     * @element-type Utilisateur
     */
    Utilisateur *myUtilisateur;


    /**
     * @element-type Signal
     */
    Signal *mySignal;

    /**
     * @element-type Signal
     */
    Signal *mySignal;

};

#endif // GenerateurSignal_h
