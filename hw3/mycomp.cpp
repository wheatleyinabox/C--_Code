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
// #include "ShiftSupervisor.h"
// #include "TeamLeader.h"

using namespace std;

int main()
{
    cout << "My Company by V. DeLeon" << endl
         << endl;

    ProductionWorker worker1("Mark", "M-628", 28, 6, 1989, 2, 8.70);
    // "Mark", "M-628", 28, 6, 1989, 2, 8.70
    cout << worker1;

    return 0;
}