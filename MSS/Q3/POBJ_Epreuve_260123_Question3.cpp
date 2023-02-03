// Librairie standard
#include <iostream>
#include <iomanip>

void Select_Var_Flottant(float &valRetour);

using namespace std;

// Programmme principal
int main()
{
	float var_f_1, var_f_2;
	
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);
	
	// Fixe nombre flottant en notation scientifique
	cout << setiosflags(ios::scientific);
	// Fixe la précision des nombres flottants
	cout.precision(3);
	cout << "Soustraction mode affichage flottant : X - Y = " << var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2);
	
	return 0;
}

void Select_Var_Flottant(float &valRetour)
{
	cin >> valRetour;
}