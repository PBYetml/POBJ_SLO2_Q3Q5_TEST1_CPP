#ifndef Utilisateur_h
#define Utilisateur_h

#include "GenerateurSignal.h"

class Utilisateur
{
	public:
		void ConfigurerGenerateur();
		void ObserverSignal();
		GenerateurSignal *myGenerateurSignal;
};

#endif // !POBJ_Epreuve_260123_Question5_h

