#pragma once
#include "Aventurier.h"

//enum Rang { junior, major, senior };

class FactoryAventurier
{

	public:
		static Aventurier* getRandomAventurier(); // static ta pas besoin de créer un instance pour créer une fonction, tu peux appelé la fonction directement donc Factory::getRandom au lieu de créer Factory maFactory et ensuite maFactory.getRandom

	/*private:
		Aventurier* getRangAventurier(Rang rang);*/
};

