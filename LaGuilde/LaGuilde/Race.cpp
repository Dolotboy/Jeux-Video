#include "Race.h"

Race::Race()
{

};

Race::Race(int attaque, int defense, int vie, int chance)
{
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->chance = chance;
}

string Race::getNom()
{
	return nom;
};
