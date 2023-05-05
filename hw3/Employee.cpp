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
#include <string>
#include <stdexcept>

#include "Employee.h"

using namespace std;

Employee::Employee(string name, string number, int month, int day, int year)
{
    this->name = name;

    this->number = number; // WHAT DO
    
    Date hr = {month, day, year};
    hireDate = hr;
}

string Employee::getName() const
{
    return name;
}
string Employee::getNumber() const
{
    return number;
}
string Employee::getHireDate()
{
    string result = std::to_string(hireDate.month) + "/" + std::to_string(hireDate.day) + "/" + std::to_string(hireDate.year);
    return result;
}

void Employee::setName(std::string name)
{
    this->name = name;
}
void Employee::setNumber(std::string number)
{
    this->number = number;
}
void Employee::setHireDate(int month, int day, int year)
{
    Date hr = {month, day, year};
    hireDate = hr;
}