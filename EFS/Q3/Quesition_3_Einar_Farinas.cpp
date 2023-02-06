//--- librairie standart ---//
#include <iostream> // entréee - sortie
// simplification d'écriture pour la class std
using namespace std;

//- déclaration de prototypes --//
void Select_Var_Flottant(float &valRetour);

//-- programme principale --//
int main(void)
{
	//-- Déclaration de variable interne ---//
	float var_f_1, var_f_2;
	
	//-- appel de fonction --//
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);
	
	//-- message utilisteur --//
	cout << "soustraction mode affichage flottant : X - Y = " << var_f1 << " - " << var_f_2 << (var_f_1 - var_f_2) << endl;
	
	return 0;
}

void Select_Var_Flottant(float &valRetour)
{
	//--- fonction pour lire la saise d'un chaîne de caractère ---//
	cin >> valRetour;
}
