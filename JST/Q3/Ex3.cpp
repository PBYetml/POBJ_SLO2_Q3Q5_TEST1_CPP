#include <iostream>
using namespace std;

void Select_var_Flottant(float *valRetour);

int main()
{
	float var_f_1, var_f_2;

	Select_var_Flottant(&var_f_1);
	Select_var_Flottant(&var_f_2);

	cout.precision(3);
	cout << "soustraction mode affichage flottant : x - y = " << var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2) << endl;
}

void Select_var_Flottant(float *valRetour)
{
	cin >> valRetour;
}