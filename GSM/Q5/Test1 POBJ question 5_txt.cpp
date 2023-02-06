Question 5


#ifndef Utilisateur_h
#define Utilisateur_h

class Utilisateur {

		public:
			void ConfigurerGenerateur();
			void ObserverSignal ();
		};
#endif //Utilisateur_h



#ifndef GenerateurSignal_h
#define GenerateurSignal_h

class GenerateurSignal {

		public:
			int ChoisirSignal();
			void ChoisirFrequence ();
			void ChoisirAmplitude ();

		private:
			int m_Frequence;
			int m_Amplitude;
		
		};

#endif //GenerateurSignal_h


#ifndef Signal_h
#define Signal_h

class Signal {

		protected:


		protected:
			int m_Frequence;

		
		};

#endif //Signal_h


#ifndef Triangle_h
#define Triangle_h

class Triangle {

		public:
			void CalculerEchantillons(int Amplitude , int DutyCycle)



		
		};

#endif //Triangle_h












