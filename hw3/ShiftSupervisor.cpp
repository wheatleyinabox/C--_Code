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
#include <cstdlib>
#include <string>

#include "ShiftSupervisor.h"

using namespace std;

ShiftSupervisor::ShiftSupervisor(string name, string number, int month, int day, int year, int annualSalary, double annualProductionBonus) : Employee(name, number, month, day, year)
{
    this->annualSalary = annualSalary;
    this->annualProductionBonus = annualProductionBonus;
}

double ShiftSupervisor::getAnnualSalary() const
{
    return annualSalary;
}
double ShiftSupervisor::getAnnualProductionBonus() const
{
    return annualProductionBonus;
}

void ShiftSupervisor::setAnnualSalary(double annualSalary)
{
    this->annualSalary = annualSalary;
}
void ShiftSupervisor::setAnnualProductionBonus(int annualProductionBonus)
{
    this->annualProductionBonus = annualProductionBonus;
}