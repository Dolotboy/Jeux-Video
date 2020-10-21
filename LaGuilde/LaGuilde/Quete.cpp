#include "Quete.h"

Quete::Quete(string nom, Difficulte difficulte, int requiredLvl, int xpFinal)
{
	this->nom = nom;
	this->difficulte = difficulte;
	verifDifficulte(difficulte, requiredLvl, xpFinal);
}

void Quete::verifDifficulte(Difficulte difficulte, int requiredLvl, int xpFinal)
{
	switch (difficulte)
	{
		case Facile:
			this->requiredLvl = 1;
			this->xpFinal = 300;
			break;
		case Moyen:
			this->requiredLvl = 20;
			this->xpFinal = 700;
			break;
		case Avance:
			this->requiredLvl = 60;
			this->xpFinal = 1200;
			break;
		case Epique:
			this->requiredLvl = 100;
			this->xpFinal = 2400;
			break;
	}
}

string Quete::to_string()
{
	string laQuete;
	laQuete.append("\n-------------------------------------------\n");
	laQuete.append("Nom	: " + nom + "\n");
	laQuete.append("Difficulte : " + std::to_string(this->getDifficulte()) + "\n"); // C'est une fonction de base dans le c++, je dois mettre std, car il mélange mon std à celui de base
	laQuete.append("Level requis : " + std::to_string(this->getRequiredLvl()) + "\n");
	laQuete.append("Xp procure a la fin : " + std::to_string(this->getXpFinal()) + "\n");

	return laQuete;
}
