#include <iostream>
#include <string>

#include "CargoShip.h"

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

// print() override