#ifdnef Utilisateur_h
#define Utilisateur_h


class Utilisateur;

class GenerateurSignal {
	
	public : 
		
		int ChoisirSignal();
		void ChoisirFrequence();
		void ChoisirAmplitude();
		
	
	public : 
	
		void ConfigurerGenerateur();
		void ObserverSignal();
		
	public :

		GenerateurSignal *myGenerateurSignal;
	
	
};

#endif // Utilisateur_h