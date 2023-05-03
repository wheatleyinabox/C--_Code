#include <iostream>
#include <cstdlib>
#include <string>

#include "Employee.h"

using namespace std;

Employee::Employee(string n, int num, int d, int m, int y)
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
    return hr;
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
    Date newHR = {d, m, y}
    hireDate = newHR;
}