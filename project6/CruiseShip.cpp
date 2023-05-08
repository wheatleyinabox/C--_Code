#include <iostream>
#include <string>

#include "CruiseShip.h"

using namespace std;

CruiseShip::CruiseShip(int maxNumberOfPassengers) : Ship(shipName, constructionDate)
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

// print() override