#ifndef GENSIGNAL_H 
#define GENSIGNAL_H 

#include "Signal.h"

class GenSignal 
{
	public:

		//-- attribut --// 

		//-- méthode --// 
		int ChoisirSignal(); 
		void ChoisirFreq(); 
		void ChoisirAmp(); 
		
		//-- constrcteur -- 
		GenSignal(); 
		~GenSignal(); 

	private: 

		//-- attribut --// 
		int m_freq;
		int m_ampl; 
		Signal SignalUser;
		




		//-- méthode --// 

}; 


#endif 




