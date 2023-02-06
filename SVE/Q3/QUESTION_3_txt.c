
#include <stdio.h>
#include <iostream>

void Select_Var_Flottant(float* valRetour);

int main()
{
	float var_f_1, var_f_2;
	
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);
	
	cout << "soustraction mode affichage flottqnt: X - Y ="<< var_f_1 << "-" << var_f_2 << = << (var_f_1 - var_f_2) << endl;
	
	return 0;
}

void Select_Var_Flottant(float &valRetour)
{
	cin >> valRetour;
}