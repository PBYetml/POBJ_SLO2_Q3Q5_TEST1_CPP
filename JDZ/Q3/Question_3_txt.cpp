//--- librairie standart ---//
#include <stdio.h>

using namespace std;

//-- déclaration de prototype --//
void Select_Var_Flottant(float &valRetour);

//-- programme principal --//
int main()
{
	//--- déclaration de variable interne ---//
	float var_f_1, var_f_2;
	
	//-- appel de fonction --//
	Select_Var_Flottant(&var_f_1);
	Select_Var_Flottant(&var_f_2);
	
	//-- message utilisateur --//
	cout << "soustraction mode affichage flottant : X - Y = << var_f_1 << - << var_f_2 << = << var_f_1 - var_f_2 << endl";
	
	return 0;
	
}

void Select_Var_Flottant(float &valRetour)
{
	//--- fonction pour la lire la saisie d'une chaîne de caractère ---//
	cin >> valRetour;
}