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

Employee::Employee(string name, string number, int day, int month, int year)
{
    this->name = name;
    this->number = number;

    Date hireDate = {d, m, y};
    this->hireDate = hireDate;
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
void Employee::setNumber(int n) const
{
    this->number = number;
}
void Employee::setHireDate(int d, int m, int y)
{
    Date hireDate = {d, m, y};
    this->hireDate = hireDate;
}