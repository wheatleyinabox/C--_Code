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
