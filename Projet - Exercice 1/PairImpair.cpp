/*
	But : Demander au programme de lire un entier et de déterminer si c'est un nombre pair ou impair
	Auteur : Rock Joly
	Date : 1er septembre 2021
*/

#include <iostream> // Permet au programme d'Afficher à l'écran et d'enregistrer les frappes (input/output)


void main() // Déclaration de la fonction main qui ne retournera aucune valeur
{
	setlocale(LC_ALL, ""); // Permet d'avoir accès, en affichage, aux caractères accentués.

	int nb; // Déclaration et Initialisation d'une variable de typer integer qui va contenir le nombre prochainement entré par l'utilisateur

	std::cout << "Veuillez entrer un nombre entier : "; // Demande à l'utilisateur d'entrer une valeur entière.
	std::cin >> nb; // Assignation de la valeur donnée par l'utilisateur dans une variable de type integer.
	std::cout << std::endl; // Permet de faire un retour à la ligne

	if (nb % 2 == 0)	// Si le résultat de modulo 2 du nombre est 0, c'est un nombre pair.
	{
		std::cout << nb << " est un nombre pair." << std::endl;	// Afficher que le nombre est pair.
	}
	else // Si le résultat du if est différent de 0 (si il est 1), c'est un nombre impair.
	{
		std::cout << nb << " est un nombre impair." << std::endl; // Afficher que le nombre est impair.
	}

	system("pause"); // Permet de voir le résultat final. Pour continuer, appuyer sur une touche du clavier.

}


/*
Veuillez entrer un nombre entier : 13
13 est un nombre impair.

Veuillez entrer un nombre entier : 88
88 est un nombre pair.

Veuillez entrer un nombre entier : 0
0 est un nombre pair.
*/