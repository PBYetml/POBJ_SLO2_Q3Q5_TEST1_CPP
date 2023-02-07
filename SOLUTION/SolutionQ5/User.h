#ifndef UTILISATEUR_H 
#define UTILISATEUR_H 

class GenSignal; 

class User
{
	public:

		//-- attribut --//
		GenSignal* pt_GenSignal; 


		//-- méthode --// 
		void ConfigurerGen();
		void ObserverSignal();

}; 
#endif 


