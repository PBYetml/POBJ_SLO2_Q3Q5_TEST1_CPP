TE1_QUESTION3_JONATHANCHAFLA

//libraire standart
#include <iostream>
using namespace std; // pour l'utilisation de cin et cout

#include <iomanip>

//declaration de prototype
void Select_Var_Flottant (float &valRetour);

//programme principale
int main ()
{

	//déclaration de variable interne//
	float var_f_1, var_f_2;

	//Appel de fonction//
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);

	//message utilisateur//
	cout << setiosflags(ios::scientific);
	cout << "soustraction mode affichage flottant : X - Y = " << cout.precision(3) 
		<< var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2) << endl;
	
	return 0;

}

void Select_Var_Flottant (float &valRetour)
{
	//fonction pour la lire la saisie d'un chaine de caracteres//
	cin >> valRetour;
}
