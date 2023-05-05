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

    // user input a worker - tests exception
        ProductionWorker worker1;
        // Sample:
        //ProductionWorker worker1("Mark Fischbach", ***"M-628"***, 28, 6, 1989, 2, 8.70);
        
        string name;
        cout << "Please enter the employee's name: " << endl;
        getline(cin, name);
        worker1.setName(name);

        string id;
        cout << "Please enter their EID: " << endl;
        cin >> id;
        worker1.setNumber(id);

        int month, day, year;
        cout << "Please enter a month, day, & year for their hire date: " << endl;
        cin >> month >> day >> year;
        worker1.setHireDate(month, day, year);

        int shift;
        cout << "Please enter the employee's shift [1-Day 2-Night]:" << endl;
        cin >> shift;
        worker1.setShift(shift);

        double hourlyRate;
        cout << "Please enter the employee's hourly wage: " << endl;
        cin >> hourlyRate;
        worker1.setHourlyRate(hourlyRate);

    ProductionWorker worker2("John Doe", "123-A", 5, 1, 2023, 1, 25);
    ProductionWorker worker3("Val DeLeon", "403-W", 4, 3, 2003, 1, 25);

    cout << worker1 << endl << endl;
    cout << worker2 << endl << endl;
    cout << worker3 << endl;

    return 0;
}