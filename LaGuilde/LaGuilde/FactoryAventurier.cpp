#include "FactoryAventurier.h"
#include "Humain.h"
#include "Elfe.h"
#include "Orc.h"
#include "Guerrier.h"
#include "Archer.h"
#include "Mage.h"
#include "Race.h"

Aventurier* FactoryAventurier::getRandomAventurier()
{
	Aventurier* monAventurier = 0; // Ici je crée mon aventurier en lui donnant le chemin vers Aventurier avec un pointeur
	/*int nbr = (rand() % (3 - 1 + 1)) + 1;
	string leRang = "";
	switch (nbr)
	{
	case 1:
		Rang rang = junior;
		break;
	case 2:
		Rang rang = major;
		break;
	case 3:
		Rang rang = senior;
		break;
	}*/

	int nbr = (rand() % (3 - 1 + 1)) + 1;

	switch (nbr)
	{
		case 1:
			monAventurier = new Guerrier(); // Ici je dit que monAventurier est un guerrier, vu que Guerrier hérite d'Aventurier
			break;
		case 2:
			monAventurier = new Archer();
			break;
		case 3:
			monAventurier = new Mage();
			break;
	}

	nbr = (rand() % (3 - 1 + 1)) + 1;

	switch (nbr)
	{
		case 1:
			monAventurier -> setRace( new Humain() ); // Ici j'appel ma méthode setRace et je lui donne une race
			break;
		case 2:
			monAventurier->setRace(new Elfe());
			break;
		case 3:
			monAventurier->setRace(new Orc());
			break;
	}

	return monAventurier;
}

/*Aventurier* getRangAventurier(Rang rang)
{
}*/
