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

ShiftSupervisor::ShiftSupervisor(double as, double apb) : Employee(n, num, d, m, y)
{
    annualSalary = as;
    annualProductionBonus = apb;
}

double ShiftSupervisor::getAnnualSalary() const
{
    return annualSalary;
}
double ShiftSupervisor::getAnnualProductionBonus() const
{
    return annualProductionBonus;
}

void ShiftSupervisor::setAnnualSalary(double a)
{
    annualSalary = a;
}
void ShiftSupervisor::setAnnualProductionBonus(int a)
{
    annualProductionBonus = a;
}