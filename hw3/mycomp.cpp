//
// Name:        DeLeon, Val
// Homework:    3
// Due:         May 5, 2023
// Course:      cs-2560-01-sp23
//
// Description:
//              Create an functioning Employee class that will be inherited by 3 functional other classes, ProductionWorker,
//              ShiftSupervisor, and TeamLeader. Use a file called mycomp.cpp to test all, including << operator overloading
//              for ShiftSupervisor
//
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Employee.cpp"
#include "ProductionWorker.cpp"
#include "ShiftSupervisor.cpp"
#include "TeamLeader.cpp"

using namespace std;

int main()
{
    cout << "My Company by V. DeLeon" << endl
         << endl;

    TeamLeader tl("Cool Dude", "152-P", 9, 12, 2016, 1, 30, 100, 0, 50);
    ShiftSupervisor ss("lazybones", "333-S", 9, 12, 2016, 30, 0.5);

    // user input workers

    ProductionWorker worker1("Mark Fischbach", "628-M", 28, 6, 1989, 2, 8.70);
    ProductionWorker worker2("John Doe", "123-A", 5, 1, 2023, 1, 25);
    ProductionWorker worker3("Val DeLeon", "403-W", 4, 3, 2003, 1, 25);

    cout << worker1 << endl << endl;
    cout << worker2 << endl << endl;
    cout << worker3 << endl;

    return 0;
}