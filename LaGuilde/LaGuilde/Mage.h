#pragma once

#include "Aventurier.h"
#include <iostream>
#include <string>

using namespace std;

class Mage : public Aventurier
{
public:
	Mage();
	virtual string to_string();

};