/*
	But : Demander à l'utilisateur d'entrer un nombre entier à 5 chiffres. Vérifier s'il y a bien 5 chiffres. Si oui, afficher
		  le nombre à la vertical. Sinon, mentionner qu'il faut un nombre à 5 chiffres.
	Auteur : Rock Joly
	Date : 1er septembre 2021
*/

#include <iostream>


void main()
{
	setlocale(LC_ALL, "");

	int nb;

	std::cout << "Veuillez entrer un nombre entier à 5 chiffres : ";
	std::cin >> nb;
	std::cout << std::endl;

	if (nb < 10000)
	{
		std::cout << nb << " est trop petit; il doit contenir 5 chiffres." << std::endl;
	}
	else if (nb > 99999)
	{
		std::cout << nb << " est trop grand; il doit contenir 5 chiffres." << std::endl;
	}
	else
	{
		std::cout << nb / 10000 << std::endl;
		nb = nb - ((nb / 10000) * 10000);
		std::cout << nb / 1000 << std::endl;
		nb = nb - ((nb / 1000) * 1000);
		std::cout << nb / 100 << std::endl;
		nb = nb - ((nb / 100) * 100);
		std::cout << nb / 10 << std::endl;
		nb = nb - ((nb / 10) * 10);
		std::cout << nb << std::endl;
	}

	system("pause");

}