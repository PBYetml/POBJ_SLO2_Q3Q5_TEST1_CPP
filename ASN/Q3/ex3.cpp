// Standard Library //
#include <iostream>

// Prototype Declaration //
void Select_Var_Flottant(float* valRetour);

int main()
{
	float var_f_1;
	float var_f_2;

	Select_Var_Flottant(&var_f_1);
	Select_Var_Flottant(&var_f_2);

	std::cout << "Soustraction mode affichage flottant : X - Y = " << var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2) << std::endl;
}

void Select_Var_Flottant(float* valRetour)
{
	std::cin >> *valRetour;
}