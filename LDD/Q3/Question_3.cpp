#include <stdio.h>
#include <iomanip>
#include <string>
#include<stdlib.h>
#include <iostream>

//pour utiliser dirrectement cin et cout 
using namespace std;

//Fonction pour selectionner variable
void Select_Var_Flottant(float &valRetour);





int main()
{
	
	//les deux variable que nous utilisons. 
	float var_f_1, var_f_2;

	//appelle des fonctions 
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);

	//affiche et fait la soustraction
	cout << "Soustraction mode d'affichage flottant : X - Y = "<< var_f_1 << " - " << var_f_2 << " = " << var_f_1- var_f_2;

	return 0;

}

void Select_Var_Flottant(float& valRetour)
{
	//prise de la valeur que nous voulons
	cin >> valRetour ;
}