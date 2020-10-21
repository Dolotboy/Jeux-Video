#include "Mage.h"

Mage::Mage():Aventurier("Armoudina", 0, 0)
{

};

string Mage::to_string()
{
    string message = Aventurier::to_string();

    message.append("Classe:         Mage \n");
    return message;
};