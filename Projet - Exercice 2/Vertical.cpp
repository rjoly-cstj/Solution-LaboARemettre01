/*
	But : Demander à l'utilisateur d'entrer un nombre entier à 5 chiffres. Vérifier s'il y a bien 5 chiffres. Si oui, afficher
		  le nombre à la vertical. Sinon, mentionner qu'il faut un nombre à 5 chiffres.
	Auteur : Rock Joly
	Date : 1er septembre 2021
*/

#include <iostream> // Inclut la bibliothèque d'entrée et sortie.


void main() // Déclaration du main qui ne retournera aucune valeur.
{
	setlocale(LC_ALL, ""); // Permet d'afficher des caractères accentués.

	int nb; // Initialisation et déclaration de variable de type integer. Cette variable servira à contenir l'entrée de l'utilisateur.

	std::cout << "Veuillez entrer un nombre entier à 5 chiffres : "; // Demande à l'utilisateur d'entrer un nombre à 5 chiffres.
	std::cin >> nb; // Assignation de la valeur entrée par l'utilisateur à la variable
	std::cout << std::endl; // Permet un retour à la ligne en affichage

	if (nb < 10000) // Si le nombre choisi est plus petit que 10000, c'est qu'il n'a pas 5 chiffres.
	{
		std::cout << nb << " est trop petit; il doit contenir 5 chiffres." << std::endl; // Afficher un message avisant l'utilisateur de son idiotie (OOPS)
	}
	else if (nb > 99999) // Si le nombre choisi est plus grand que 99999, c'est qu'il a plus de 5 chiffres.
	{
		std::cout << nb << " est trop grand; il doit contenir 5 chiffres." << std::endl; // Afficher un message avisant l'utilisateur de la bêtise commise.
	}
	else // Autrement, c'est un nombre à 5 chiffres
	{
		std::cout << nb / 10000 << std::endl; // Affiche la valeur des 10000
		nb = nb - ((nb / 10000) * 10000); // Retire la position des 10000 pour se retrouver avec un nombre dans les 1000ier
		std::cout << nb / 1000 << std::endl; // Affiche la valeur des 1000
		nb = nb - ((nb / 1000) * 1000); // Retire la position des 1000 pour se retrouver avec un nombre dans les 100aine
		std::cout << nb / 100 << std::endl; // Affiche la valeur des 100
		nb = nb - ((nb / 100) * 100); // Retire la position des 100 pour se retrouver avec un nombre dans les 10aine
		std::cout << nb / 10 << std::endl; // Affiche la valeur des 10
		nb = nb - ((nb / 10) * 10); // Retire la position des 10 pour se retrouver avec un nombre unitaire (chiffre)
		std::cout << nb << std::endl; // Affiche la valeur des unités
	}

	system("pause"); // Permet de mettre l'exécution du programme en pause jusqu'à l'interruption clavier par l'utilisateur.

}
