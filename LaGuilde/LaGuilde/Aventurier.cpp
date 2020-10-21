#include "Aventurier.h"


Aventurier::Aventurier()
{

};

Aventurier::Aventurier(string nom, int niveau, int exp)
{
	this->nom = nom;
	this->niveau = niveau;
	this->exp = exp;
};

void Aventurier::setRace(Race* maRace)
{
	this->maRace = maRace;
}

int Aventurier::getAtt()
{
	return attaque + maRace->attaque;
}

int Aventurier::getDef()
{
	return defense + maRace->defense;
}

int Aventurier::getVie()
{
	return vie + maRace->vie;
}


string Aventurier::to_string()
{
	string bonhomme;
	bonhomme.append("\n-------------------------------------------\n");
	bonhomme.append("Nom :		" + nom + "\n");
	bonhomme.append("Attaque :	" + std::to_string(this->getAtt()) + "\n"); // C'est une fonction de base dans le c++, je dois mettre std, car il mélange mon std à celui de base
	bonhomme.append("Defense :	" + std::to_string(this->getDef()) + "\n");
	bonhomme.append("Vie :		" + std::to_string(this->getVie()) + "\n");
	bonhomme.append("Exp :		" + std::to_string(exp) + "\n");
	bonhomme.append("Niveau :	" + std::to_string(niveau) + "\n");
	bonhomme.append("Race :		" + maRace->nom + "\n");
	return bonhomme;
}
