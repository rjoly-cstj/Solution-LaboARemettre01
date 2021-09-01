/*
	But : Demander au programme de lire un entier et de d�terminer si c'est un nombre pair ou impair
	Auteur : Rock Joly
	Date : 1er septembre 2021
*/

#include <iostream> // Permet au programme d'Afficher � l'�cran et d'enregistrer les frappes (input/output)


void main() // D�claration de la fonction main qui ne retournera aucune valeur
{
	setlocale(LC_ALL, ""); // Permet d'avoir acc�s, en affichage, aux caract�res accentu�s.

	int nb; // D�claration et Initialisation d'une variable de typer integer qui va contenir le nombre prochainement entr� par l'utilisateur

	std::cout << "Veuillez entrer un nombre entier : "; // Demande � l'utilisateur d'entrer une valeur enti�re.
	std::cin >> nb; // Assignation de la valeur donn�e par l'utilisateur dans une variable de type integer.
	std::cout << std::endl; // Permet de faire un retour � la ligne

	if (nb % 2 == 0)	// Si le r�sultat de modulo 2 du nombre est 0, c'est un nombre pair.
	{
		std::cout << nb << " est un nombre pair." << std::endl;	// Afficher que le nombre est pair.
	}
	else // Si le r�sultat du if est diff�rent de 0 (si il est 1), c'est un nombre impair.
	{
		std::cout << nb << " est un nombre impair." << std::endl; // Afficher que le nombre est impair.
	}

	system("pause"); // Permet de voir le r�sultat final. Pour continuer, appuyer sur une touche du clavier.

}


/*
Veuillez entrer un nombre entier : 13
13 est un nombre impair.

Veuillez entrer un nombre entier : 88
88 est un nombre pair.

Veuillez entrer un nombre entier : 0
0 est un nombre pair.
*/