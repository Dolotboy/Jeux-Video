#pragma once
#include <iostream>
#include <string>

using namespace std;

class Race
{
	public:
		int attaque;
		int defense;
		int	vie;
		int chance;
		string nom;
		Race();
		Race(int attaque, int defense, int vie, int chance);
		string getNom();
};

