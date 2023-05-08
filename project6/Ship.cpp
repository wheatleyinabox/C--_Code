#include <iostream>
#include <string>
#include "Ship.h"

using namespace std;

Ship::Ship(std::string shipName, std::string constructionDate)
{
    this->shipName = shipName;
    this->constructionDate = constructionDate;
}

std::string Ship::getShipName() const
{
    return shipName;
}
std::string Ship::getConstructionDate() const
{
    return constructionDate;
}

void Ship::setShipName(std::string shipName)
{
    this->shipName = shipName;
}
void Ship::setConstructionDate(std::string constructionDate)
{
    this->constructionDate = constructionDate;
}

// print() *<< overload*