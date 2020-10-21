#pragma once
#include<list>
#include<vector>
#include"Aventurier.h"
#include"MenuManager.h"
#include"FactoryAventurier.h"
#include"Quete.h";

class Guilde
{
	private:
		int orDisponible;
		bool finPartie;
		vector<Aventurier*> tabAventurierChoisi;
		list<Aventurier*> listAventurierRecrutable;
		list<Quete*> listQueteDisponible;
		list<Quete*> listQueteChoisi;
		void recruterHero(Aventurier* aventurier);
		void update();
		void updateMenu();

	public:
		Guilde();
		~Guilde();
		void initialiserJeu();
		void lancerJeu();
		void selectionnerHero();
		void selectionnerQuete();
		void afficherQueteChoisi();
		void afficherHeroRecruter();
};

