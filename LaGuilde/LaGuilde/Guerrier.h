#pragma once

#include "Aventurier.h"
#include <iostream>
#include <string>

using namespace std;

class Guerrier : public Aventurier
{
	public:
		Guerrier();
		virtual string to_string(); // Va red�finir celui du parent
};

