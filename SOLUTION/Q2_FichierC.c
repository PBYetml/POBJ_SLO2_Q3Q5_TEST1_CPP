//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie

//-- déclaration de prototype --//
void Select_Var_Flottant(float* valRetour);

//-- programme principale --// 
int main()
{
	//--- déclaration de variable interne ---//
	float var_f_1, var_f_2;

	//-- appel de fonction --//
	Select_Var_Flottant(&var_f_1);
	Select_Var_Flottant(&var_f_2);

	//-- message utilisateur --// 
	printf("soustraction mode affichage flottant : X - Y  = %1.3e - %1.3e = %1.3e", var_f_1, var_f_2, (var_f_1 - var_f_2));

	return 0;
}

void Select_Var_Flottant(float* valRetour)
{
	//--- fonction pour la lire la saisie d'un chaîne de caractère ---//
	scanf_s("%f", valRetour);
}
