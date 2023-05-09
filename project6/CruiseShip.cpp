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

#include "CruiseShip.h"

using namespace std;

CruiseShip::CruiseShip(std::string shipName, std::string constructionDate, int maxNumberOfPassengers) : Ship(shipName, constructionDate)
{
    this->maxNumberOfPassengers = maxNumberOfPassengers;
}

int CruiseShip::getMaxNumberOfPassengers() const
{
    return maxNumberOfPassengers;
}

void CruiseShip::setMaxNumberOfPassengers(int maxNumberOfPassengers)
{
    this->maxNumberOfPassengers = maxNumberOfPassengers;
}

void CruiseShip::printShip(CruiseShip &cs)
{
    cout << "~-= CRUISE SHIP =-~" << endl
         << "Name: " << cs.getShipName() << endl
         << "Maximum Passenger Capacity: " + maxNumberOfPassengers << endl;
}