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

    virtual void printShip();

    friend std::ostream& operator<<(std::ostream& OS, Ship ship);
};