TE5_QUESTION3_JONATHANCHAFLA

#include <iostream>

using namespace std;

#include "Utilisateur.h"
#include "GenerateurSignal.h"
#include "Signal.h"
#include "Triangle.h"


//class 

-------------------------------------------------------
#ifndef Utilisateur_h
#define Utilisateur_h

class GenerateurSignal;

class Utilisateur

{
	public : 

		void ConfigurerGenerateur ();
		void ObserverSignal ();

	public :
		GenerateurSignal *MyGenerateurSignal;

}
#endif // Utilisateur_h

--------------------------------------------------------
#ifndef GenerateurSignal_h
#define GenerateurSignal_h

class Utilisateur;

class GenerateurSignal
{
	public :

		int ChoisirSignal();
		void ChoisirFrequence ();
		void ChoisirAmplitude();

	public :
		Utilisateur *MyUtilisateur;

	private: 
		int m_Frequence;
		int m_Amplitude;

}
#endif // GenerateurSignal_h

-------------------------------------------------------
#ifndef Signal_h
#define Signal_h

class Signal
{
	public :

		int m_TableEch [20];
		int m_PeriodeEchantillonage;

	void CalculerEchantillons(intAmplitude, int DutyCycle);
	void AfficherEchantillons ();

	private : 
		void GetPeriodeEch ();
}
#endif // Signal_h

-------------------------------------------------------
#ifndef Triangle_h
#define Triangle_h

class Triangle : public Signal 
{
	public:

		void CalculerEchantillons(int Amplitude, int DutyCycle);
}
#endif // Triangle_h



-------------------------------------------------------