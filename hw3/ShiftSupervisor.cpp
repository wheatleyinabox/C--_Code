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

ShiftSupervisor::ShiftSupervisor(string n, string num, int d, int m, int y, int as, double apb)
{
    name = n;
    
    if (isdigit(num))
    {
        throw std::invalid_argument(num + ": not valid employee id");
    }
    else
    {
        number = num;
    }

    Date hd = {d, m, y};
    hireDate = hd;

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