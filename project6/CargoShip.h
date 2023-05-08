#include "Ship.h"
#pragma once
class CargoShip : public Ship
{
private:
    int capacity;

public:
    CargoShip(std::string shipName, std::string constructionDate, int capacity);
    int getCapacity() const;
    void setCapacity(int capacity);

    // print() OVERRIDE
};