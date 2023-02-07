#ifndef SIGNAL_H 
#define SIGNAL_H 

class Signal 
{
	public:

		//-- attribut --// 

		//-- méthode --// 
		virtual void CaclulerEch(int A, int DC); 
		void AfficherEch(); 

	protected:
		//-- attribut --// 
		int m_tbEch[20]; 
		int m_periodeEch; 

		//-- méthode --// 

	private : 
		//-- méthode --// 
		int GetPeriodeEch(); 

};


#endif 


