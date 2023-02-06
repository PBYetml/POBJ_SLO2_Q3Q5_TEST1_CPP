#include <iostream>
using namespace std;
#include <iomanip>



void select_var_flottant(float &valRetour);

int main() {


	float var_f_1, var_f_2;

	select_var_flottant(var_f_1);
	select_var_flottant(var_f_2);
	cout << setiosflags(ios::scientific);
	cout << "soustraction mode affichage flottant : X - Y = " << cout.precision(3) 
		<< var_f_1 << " - " << var_f_2 << " = " << (var_f_1 - var_f_2) << endl;

	return 0;
}

void select_var_flottant(float &valRetour) {

	cin >> valRetour;
}
