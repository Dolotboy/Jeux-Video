#pragma once

#include "Aventurier.h"
#include <iostream>
#include <string>

using namespace std;

class Archer : public Aventurier
{
public:
	Archer();
	virtual string to_string();
};

