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
#include <cstdlib>
#include <string>
#include <stdexcept>

#include "Employee.h"

using namespace std;

Employee::Employee(string n, string num, int d, int m, int y)
{
    name = n;
    number = num;

    Date hd = {d, m, y};
    hireDate = hd;
}

string Employee::getName()
{
    return name;
}
string Employee::getNumber() const
{
    return number;
}
Date Employee::getHireDate()
{
    return hireDate;
}

void Employee::setName(string n)
{
    name = n;
}
void Employee::setNumber(int n) const
{
    number = n;
}
void Employee::setHireDate(int d, int m, int y)
{
    Date newHR = {d, m, y};
    hireDate = newHR;
}