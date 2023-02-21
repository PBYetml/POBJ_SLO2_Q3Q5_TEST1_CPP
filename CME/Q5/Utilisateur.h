#ifndef Utilisateur_h
#define Utilisateur_h

class GenerateurSiganl;

class Utilisateur {

public:


	void ConfigurerGenerateur();
	void ObserverSignal();


private:
	int m_CodeFormeChoisie;

public:

	/**
	 * @element-type FormesGeometriques
	 */
	GenerateurSiganl *myGenerateurSiganl;
};

#endif // Utilisateur_h
