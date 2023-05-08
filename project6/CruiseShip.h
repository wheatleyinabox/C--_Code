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
class CruiseShip : public Ship
{
    private:
        int maxNumberOfPassengers;
    public:
        CruiseShip(std::string shipName, std::string constructionDate, int maxNumberOfPassengers);
        
        int getMaxNumberOfPassengers() const;
        void setMaxNumberOfPassengers(int maxNumberOfPassengers);

        // vitural print() *OVERRIDDES BASE FUNCTION*
};
