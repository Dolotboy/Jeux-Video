#pragma once
#include "Aventurier.h"

//enum Rang { junior, major, senior };

class FactoryAventurier
{

	public:
		static Aventurier* getRandomAventurier(); // static ta pas besoin de cr�er un instance pour cr�er une fonction, tu peux appel� la fonction directement donc Factory::getRandom au lieu de cr�er Factory maFactory et ensuite maFactory.getRandom

	/*private:
		Aventurier* getRangAventurier(Rang rang);*/
};

