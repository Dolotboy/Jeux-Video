#include <iostream>
#include<ctime>
#include "Aventurier.h"
#include "FactoryAventurier.h"
#include"Guilde.h"

using namespace std;

int main()
{
	srand(time(NULL));
	/* PARTIE #1 
	FactoryAventurier monCreateur;// Ici je ne m'est pas d'étoile, car je fais juste créer une variable

	Aventurier* aventurierCree = monCreateur.getRandomAventurier();// Ici je met un étoile et pas à la ligne 12, car je veux le sauvegarder et le réusitiliser partout
	cout << aventurierCree->to_string();// Ici, c'est une flèche et non un point, pcq c'est un pointeur
	*/

	Guilde laGuilde; // Car on veux la garder plus tard qu'on mets une étoile, on veux faire une new guilde
	MenuManager menu;
	menu.menuPrincipal();
}
