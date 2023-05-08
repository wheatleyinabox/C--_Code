#include <iostream>
#include <string>
#include "Ship.h"

using namespace std;

Ship::Ship(string shipName, string constructionDate)
{
    this->shipName = shipName;
    this->constructionDate = constructionDate;
}

string Ship::getShipName()
{
    return shipName;
}
string Ship::getConstructionDate()
{
    return constructionDate;
}

void Ship::getShipName(string shipName)
{
    this->shipName = shipName;
}
void Ship::setConstructionDate(string constructionDate)
{
    this->constructionDate = constructionDate;
}

// print() *<< overload*