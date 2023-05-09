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
#pragma once
class Ship
{
    private:
        std::string shipName;
        std::string constructionDate;
    public:
        Ship(std::string shipName, std::string constructionDate);
        
        std::string getShipName() const;
        std::string getConstructionDate() const;

        void setShipName(std::string shipName);
        void setConstructionDate(std::string constructionDate);

        virtual void printShip() = 0;
};