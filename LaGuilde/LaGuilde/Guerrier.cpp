#include "Guerrier.h"

Guerrier::Guerrier():Aventurier("LeFameux",0,0)
{

};

string Guerrier::to_string()
{
    string message = Aventurier::to_string();

    message.append("Classe:         Guerrier \n");
    return message;
};
