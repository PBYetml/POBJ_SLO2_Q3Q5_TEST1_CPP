Question 3 convertir du c en cpp

//---librairie standart---//

#include <iomanip>
#include <iostream>
using namespace std;

//-- déclaration de prototype --//
void Select_Var_Flottant(float &valRetour);

//-- programme principale --//
int main ()
{
	//--- déclaration de variable ---//
	float var_f_1, var_f_2;

	//-- appel de fonction --//
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);

	//-- message utilisateur --//
	cout << setiosflags (ios :: scientific ) ;
	cout.precision (3) ;
	cout << "soustraction mode affichage flottant : X - Y = " << var_f_1 << "-" << var_f_2 << "=" << var_f_1 - var_f_2 << endl;

	return 0;
}

void Select_Var_Flottant(float &valRetour)
{
	//--- fonction pour la lire la saisie d'un chaîne de caractère ---//
	cin >> valRetour;

}
