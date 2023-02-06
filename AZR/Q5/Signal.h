#ifndef SIGN_H
#define SIGN_H


/**
  * class Signal
  *
  */

class Signal
{
public:
	/* Public attributes */

	// Constructors/Destructors
	//  

	/**
	 * Empty Constructor
	 */
	Signal();

	/**
	 * Empty Destructor
	 */
	virtual ~Signal();

	/* Other methods */
	virtual void CalculerEchantillons(int Amplitude, int DuttyCycle);


	void AfficherEchantillons();

protected:
	// Static Protected attributes
	//  

	// Protected attributes
	//  
	int m_TableEch[20];

	int m_PeriodeEchantillonage;

	// Protected attribute accessor methods
	//  


	// Protected attribute accessor methods
	//

private:
	// Static Private attributes
	//  

	// Private attributes
	//  


	// Private attribute accessor methods
	//  


	// Private attribute accessor methods
	//
	int GetPeriodeEch();

};

#endif // CERCLE_H
