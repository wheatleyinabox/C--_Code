#include <cstdlib>
#include <string>

#include "ShiftSupervisor.h"

using namespace std;

ShiftSupervisor::ShiftSupervisor(double as, double apb) : Employee(string n, int num, int d, int, m, int y)
{
    annualSalary = as;
    annualProductionBonus = apb;

    name = n;
    number =  num;
    Date hr = {d, m, y};
    hireDate = hr;
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