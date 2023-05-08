#include "Ship.h"
class CargoShip : public Ship
{
    private:
        int capacityInTonnage;
    public:
        CargoShip(int capacityInTonnage) : Ship(shipName, constructionDate);

        int getCapacityInTonnage() const;
        void setCapacityInTonnage();

        // print() OVERRIDE
};