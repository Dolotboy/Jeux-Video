#include "Guilde.h"

Guilde::Guilde()
{
	orDisponible = 1000;
	finPartie = false;
	listAventurierRecrutable.push_back(FactoryAventurier::getRandomAventurier());
	listAventurierRecrutable.push_back(FactoryAventurier::getRandomAventurier());
	listQueteDisponible.push_back(new Quete("Aller voir le marechal", Facile, 0, 0));
	listQueteDisponible.push_back(new Quete("Ramasser des griffes de sangliers", Facile, 0, 0));
};

Guilde::~Guilde()
{
};

void Guilde::initialiserJeu()
{
	MenuManager* leMenu;
}

void Guilde::lancerJeu()
{
	update();
}

void Guilde::recruterHero(Aventurier* aventurier)
{
	tabAventurierChoisi.push_back(aventurier);
	listAventurierRecrutable.remove (aventurier);
	/*for (Aventurier* aventurier : tabAventurierChoisi)
	{
		cout << aventurier->to_string();
	}*/
}

void Guilde::update()
{
	do {
		updateMenu();
	} while (!finPartie);
}

void Guilde::updateMenu()
{

}

void Guilde::selectionnerHero()
{
	int cpt = 1;
	int choix = 0;
	for(Aventurier* aventurier : listAventurierRecrutable)
	{
		cout << "\n\nHero #" << cpt;
		cout << aventurier->to_string();
		cpt++;
	}

	cout << "Choisissez un hero" << endl;
	cin >> choix;
	choix = choix - 1;

	list<Aventurier*>::iterator it = listAventurierRecrutable.begin();

	std::advance(it, choix);

	recruterHero(*it);
}

void Guilde::selectionnerQuete()
{
	int choix = 0;
	for (Quete* quete : listQueteDisponible)
	{
		cout << quete->to_string();
	}

	cout << "Choisissez une quete" << endl;
	cin >> choix;
	if (choix == 0)
	{
		MenuManager* leMenu = new MenuManager();
		leMenu->menuPrincipal();
	}
	choix = choix - 1;

	list<Quete*>::iterator it = listQueteDisponible.begin();

	std::advance(it, choix);

	listQueteChoisi.push_back(*it);
	listQueteDisponible.remove (*it);

}

void Guilde::afficherQueteChoisi()
{
	int choix = 0;
	for (Quete* quete : listQueteChoisi)
	{
		cout << quete->to_string();
	}
}

void Guilde::afficherHeroRecruter()
{
	int cpt = 1;
	int choix = 0;
	for (Aventurier* aventurier : tabAventurierChoisi)
	{
		cout << "\n\nHero #" << cpt;
		cout << aventurier->to_string();
		cpt++;
	}
}
