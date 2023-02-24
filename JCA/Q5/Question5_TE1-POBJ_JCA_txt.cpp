TE5_QUESTION3_JONATHANCHAFLA


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

#include "Utilisateur.h"

class GenerateurSignal
{
	public :

		int ChoisirSignal();
		void ChoisirFrequence ();
		void ChoisirAmplitude();

	private: 
		int m_Frequence;
		int m_Amplitude;

}
#endif // GenerateurSignal_h

-------------------------------------------------------
#ifndef Signal_h
#define Signal_h
	
#include "GenerateurSignal.h"

class Signal
{
	public : 

	virtual void CalculerEchantillons ( int Amplitude, int Duty_cycle);
	void AfficherEchantillons ();

	private : 
		int GetPeriodeEch ();
	
	protected :

		int m_TableEch [20];
		int m_PeriodeEchantillonage;
}
#endif // Signal_h

-------------------------------------------------------
#ifndef Triangle_h
#define Triangle_h

class Triangle : public Signal
{
public:

	virtual void CalculerEchantillons(int Amplitude, int DutyCycle);
}
#endif // Triangle_h



-------------------------------------------------------
