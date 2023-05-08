#include "Ship.h"
class CruiseShip : public Ship
{
    private:
        int maxNumberOfPassengers;
    public:
        CruiseShip(int maxNumberOfPassengers) : Ship(shipName, constructionDate);
        
        int getMaxNumberOfPassengers() const;
        void setMaxNumberOfPassengers();

        // print() *OVERRIDDES BASE FUNCTION*
};
