    // Standard Library //
#include <iostream>
#include <iomanip>

// Prototype Declaration //
void Select_Var_Flottant(float* valRetour);

int main()
{
	float var_f_1;
	float var_f_2;

	Select_Var_Flottant(&var_f_1);
	Select_Var_Flottant(&var_f_2);

    std::cout << setiosflags(std::ios::scientific);
	std::cout << "Soustraction mode affichage flottant : X - Y = " << std::cout.precision(3) << var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2) << std::endl;
}

void Select_Var_Flottant(float* valRetour)
{
	std::cin >> *valRetour;
}