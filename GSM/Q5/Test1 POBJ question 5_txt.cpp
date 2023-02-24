Question 5


#ifndef Utilisateur_h
#define Utilisateur_h

class GenerateurSignal;

class Utilisateur {

		public:
			void ConfigurerGenerateur();
			void ObserverSignal ();

		public : 
			GenerateurSignal *myGenerateurSignal;

		};
#endif //Utilisateur_h



#ifndef GenerateurSignal_h
#define GenerateurSignal_h

#include "Signal.h"

class GenerateurSignal {

		public:
			int ChoisirSignal();
			void ChoisirFrequence ();
			void ChoisirAmplitude ();
			GenerateurSignal();
			~GenerateurSignal();

		private:
			int m_Frequence;
			int m_Amplitude;
			Signal mySignal;
		
		};

#endif //GenerateurSignal_h


#ifndef Signal_h
#define Signal_h

class Signal {
		public:
			virtual void CalculerEchantillons(int Amplitude, int DutyCycle);
			void AfficherEchantillons ();

		private:
			void GetPeriodeEch ();


		protected:
			  int m_TableEch[20];
			  int m_PeriodeEchantillonage;	
		};
#endif //Signal_h


#ifndef Triangle_h
#define Triangle_h

#include Signal.h

class Triangle : public Signal

		{

		public:
			void CalculerEchantillons(int Amplitude , int DutyCycle)

		};

#endif //Triangle_h
