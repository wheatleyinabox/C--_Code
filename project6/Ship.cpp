//
// Name:        DeLeon, Val
// Project:     6
// Due:         May 12, 2023
// Course:      cs-2560-01-sp23
//
// Description:
//              Using Programming Challenge #12, create classes Ship, CruiseShip, and CargoShip with a vitrual print function
//              and create a dynamically allocated array of ships to then create a variety of operator overloading functions.
//
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