#include <iostream>
#include <string>

#include "CargoShip.h"

CargoShip::CargoShip(int capacityInTonnage) : Ship(shipName, constructionDate)
{
    this->capacityInTonnage = capacityInTonnage;
}

int getCapacityInTonnage() const
{
    return capacityInTonnage;
}
void setCapacityInTonnage()
{
    this->capacityInTonnage = capacityInTonnage;
}

// print() override