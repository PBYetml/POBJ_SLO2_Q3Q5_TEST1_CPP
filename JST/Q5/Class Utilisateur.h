#ifndef Class Utilisateur_h
#define Class Utilisateur_h

class Class Generateur signal;

class Class Utilisateur {

 public:

    void ConfigurerGeneraeur();

    void ObserverSignal();

 public:

    /**
     * @element-type Class Generateur signal
     */
    Class Generateur signal *myClass Generateur signal;
};

#endif // Class Utilisateur_h
