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

