#include "MenuManager.h"

MenuManager::MenuManager()
{

}

void MenuManager::menuSelectionHero()
{
	Guilde* laGuilde = new Guilde();
	cout << "Voici vos choix de hero a recruter";
	laGuilde->selectionnerHero();
}

void MenuManager::menuSelectionQuete()
{
	Guilde* laGuilde = new Guilde();
	cout << "Voici vos quêtes disponible !";
	laGuilde->selectionnerQuete();
}

void MenuManager::menuQueteChoisi()
{
	Guilde* laGuilde = new Guilde();
	cout << "Voici les quetes qui vous ont ete attribue";
	laGuilde->afficherQueteChoisi();
}

void MenuManager::menuHeroRecruter()
{
	Guilde* laGuilde = new Guilde();
	cout << "Voici les quetes qui vous ont ete attribue";
	laGuilde->afficherHeroRecruter();
}

void MenuManager::menuPrincipal()
{
	int choix = 0;
	cout << "Bienvenue preux chevalier, choisissez une action" << endl;
	cout << "1- Recruter un hero pour votre guilde" << endl;
	cout << "2- Selectionner une quete" << endl;
	cout << "3- Afficher vos quetes" << endl;
	cout << "4- Afficher vos heros recruter" << endl;

	cout << "\nChoisissez une option" << endl;
	cin >> choix;

	switch (choix)
	{
		case 1:
			menuSelectionHero();
			break;
		case 2:
			menuSelectionQuete();
			break;
		case 3:
			menuQueteChoisi();
			break;
		case 4:
			menuHeroRecruter();
			break;
	}
	menuPrincipal();
}
