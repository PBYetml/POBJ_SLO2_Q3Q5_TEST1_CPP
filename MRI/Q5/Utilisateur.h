#ifndef Utilisateur_h
#define Utilisateur_h

class GenerateurSignal;

class Utilisateur {

 public:

    void ConfigurerGenerateur();

    void newOperation();

 public:

    /**
     * @element-type GenerateurSignal
     */
    GenerateurSignal *myGenerateurSignal;
};

#endif // Utilisateur_h
