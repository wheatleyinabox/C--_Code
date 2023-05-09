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
#include <fstream>
#include <string>

#include "CargoShip.h"

using namespace std;

CargoShip::CargoShip(std::string shipName, std::string constructionDate, int capacity) : Ship(shipName, constructionDate)
{
    this->capacity = capacity;
}

int CargoShip::getCapacity() const
{
    return capacity;
}
void CargoShip::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void CargoShip::printShip(CargoShip &cs)
{
    cout << "~-= CRUISE SHIP =-~" << endl << 
    "Name: " << cs.getShipName() << endl << 
    "Maximum Cargo Capacity: " << capacity << endl;
}