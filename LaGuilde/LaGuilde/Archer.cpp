#include "Archer.h"

Archer::Archer():Aventurier("Shitpitos", 0, 0)
{

};

string Archer::to_string()
{
    string message = Aventurier::to_string();

    message.append("Classe:         Archer \n");
    return message;
};
