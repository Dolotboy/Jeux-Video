#pragma once
#include <string>
#include <iostream>
#include "Race.h"

using namespace std;

class Aventurier
{
	private:
		int valeurMarchande;
		Race* maRace;

	protected:
		int attaque;
		int defense;
		int vie;
		int chance;
		string nom;
		int niveau;
		int exp;
		string rang;

	public:
		Aventurier();
		Aventurier(string nom, int niv, int xp);
		void setRace(Race* maRace);
		int getAtt();
		int getDef();
		int getVie();
		virtual string to_string(); // Donc l'enfant va peut être le redéfinir
};