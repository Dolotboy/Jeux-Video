#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Difficulte
{
	Facile = 0,
	Moyen = 1,
	Avance = 2,
	Epique = 3,
};

class Quete
{
	public:
		Quete(string nom, Difficulte difficulte, int requiredLvl, int xpFinal);
		void verifDifficulte(Difficulte difficulte, int requiredLvl, int xpFinal);
		virtual string to_string();
		int getRequiredLvl() { return requiredLvl; }
		int getXpFinal() { return xpFinal; }
		string getNom() { return nom; }
		Difficulte getDifficulte() { return difficulte; }

	private:
		string nom;
		int requiredLvl;
		int xpFinal;
		Difficulte difficulte;
};

