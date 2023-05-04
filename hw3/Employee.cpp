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

Employee::Employee(string name, string number, int month, int day, int year)
{
    this->name = name;
    this->number = number; // error check

    Date hr = {month, day, year};
    hireDate = hr;
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

void Employee::setName(string name)
{
    this->name = name;
}
void Employee::setNumber(int number) const
{
    this->number = number;
}
void Employee::setHireDate(int month, int day, int year)
{
    Date hr = {month, day, year};
    hireDate = hr;
}