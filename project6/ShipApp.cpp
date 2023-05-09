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
#include <iostream>
#include <fstream>
#include <string>

#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

int main()
{
    cout << "Ship by V. DeLeon" << endl << endl;

    cout << "PROGRAMMING CHALLENGE #12" << endl;
    const int size = 3;

    // DYNAMIC:
    Ship *dynamicShipArray[size] =
    {   new Ship("Gammy", "4/13/1945"),
        new CruiseShip("Catalina", "8/24/2019", 200),
        new CargoShip("Porter", "3/6/2012", 30)
    };
    
    for (int i = 0; i < size; i++)
    {
        dynamicShipArray[i]->printShip();
        cout << endl;
    }

    // NON-DYNAMIC:
    Ship lameShip("Gammy", "4/13/1945");
    CruiseShip partyShip("Catalina", "8/24/2019", 200);
    CargoShip storageShip("Porter", "3/6/2012", 30);

// >> OPERATOR OVERLOADING: USER INPUT CREATING A CRUISESHIP OBJECT

// << OPERATOR OVERLOADING: TYPE(NAME,YEAR BUILT,SPECIFIC)
    cout << lameShip;
    cout << partyShip;
    cout << storageShip << endl;

// + AND POSTFIX/PREFIX ++ OPERATOR OVERLOADING: INCREMENT CRUISESHIP OBJECT
    partyShip + 5;
    partyShip++;
    ++partyShip;
    cout << partyShip;

    return 0;
}