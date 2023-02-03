//--- librairie standard ---//
#include <iostream>

using namespace std;

//--- Declaration de prototype ---//
void Select_Var_Flottant(float* valRetour);

//--- Programme principale ---//
int main()
{
	//--- Declaration de variable interne ---//
	float var_f_1, var_f_2;
	
	//--- Appel de fonction ---//
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);
	
	//--- Message utilisateur ---//
	cout << "soustraction mode affichage flottant: X - Y = %.3" << var_f_1 << " - %.3" << var_f_2 << " = %.3" << (var_f_1 - var_f_2) << endl;
	
	return 0;
}

void Select_Var_Flottant(float* valRetour)
{
	//--- Fonction pour lire la saisie d'une chaine de caractere ---//
	cin >> valRetour;
}