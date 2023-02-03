//--- Librairie standart ---//
#include <stdio.h>
#incldue <iostream>
using namespace std;


//-- déclaration de prototype --//
void Select_Var_Flottant(float* valRetour);


//-- Programme principale --//
int main()
{
	float var_f_1, var_f_2;
	
	//-- appel de fonction --//
	Select_Var_flottant(&var_f_1);
	Select_Var_flottant(&var_f_2);
	
	
	//-- message utilisateur --//
	Resulat = (var_f_1 - var_f_2);
	
	cout << "Soustraction mode affichage flottant : X - Y = " << var_f_1 << "-  " <<var_f_2 "=  "<<Resulat << endl; 

	return 0;
}


void Select_Var_Flottant(float* valRetour)
{
	//--- Fonction pour la lecture de la saisie d'une chaîne de caractère ---//
	cin >> valRetour;
}