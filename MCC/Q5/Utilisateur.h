#ifndef Utilisateur_h
#define Utilisateur_h

#include "GenerateurSignal.h"

class Utilisateur {

 public:

    void ConfigurerGenerateur();

    void ObserverSignal();
	
	/**
	* @element-type Arme
	*/
	GenerateurSignal *myGenerateurSignal;

};

#endif // Utilisateur_h
