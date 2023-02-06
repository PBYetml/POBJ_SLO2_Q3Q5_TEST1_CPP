#ifndef GENSIGN_H
#define GENSIGN_H

#include "Signal.h"

/**
  * class Generateur Signal
  *
  */

class GenerateurSignal
{
public:
	/* Public attributes */

	// Constructors/Destructors
	//  

	/**
	 * Empty Constructor
	 */
	GenerateurSignal();

	/**
	 * Empty Destructor
	 */
	virtual ~GenerateurSignal();

	/* Other public methods */
	int ChoisirSignal();

	void ChoisirFrequence();

	void ChoisirAmplitude();

protected:
	// Static Protected attributes
	//  
	Signal mySignal;

	// Protected attributes
	//  


	// Protected attribute accessor methods
	//  


	// Protected attribute accessor methods
	//

private:
	// Static Private attributes
	//  
	int m_Frequence;
	int m_Amplitude;

	// Private attributes
	//  


	// Private attribute accessor methods
	//  


	// Private attribute accessor methods
	//

};

#endif // CERCLE_H