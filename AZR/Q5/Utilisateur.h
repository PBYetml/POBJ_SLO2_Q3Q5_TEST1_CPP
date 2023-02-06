#ifndef USER_H
#define USER_H

#include"GenerateurSignal.h"

/**
  * class Utilisateur
  *
  */

class Utilisateur
{
public:
	/* Public attributes */
	GenerateurSignal *myGenerateur;
	
	// Constructors/Destructors
	//  

	/**
	 * Empty Constructor
	 */
	Utilisateur();

	/**
	 * Empty Destructor
	 */
	virtual ~Utilisateur();

	/* Other methods */
	void ConfigurerGenerateur();


	void ObserverSignal();

protected:
	// Static Protected attributes
	//  

	// Protected attributes
	//  


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

};

#endif // CERCLE_H
