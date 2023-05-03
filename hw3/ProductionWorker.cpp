#include <cstdlib>
#include <string>

#include "ProductionWorker.h"

using namespace std;

ProductionWorker::ProductionWorker(int s, double hr) : Employee(string n, int num, int d, int, m, int y)
{
    shift = s;
    hourlyRate = hr;

    name = n;
    number = num;
    Date hDate = {d, m, y};
    hireDate = hDate;
}

int ProductionWorker::getShift() const
{
    return shift;
}
double ProductionWorker::getHourlyRate() const
{
    return hourlyRate;
}
void ProductionWorker::setShift(int s)
{
    shift = s;
}
void ProductionWorker::setHourlyRate(int hr)
{
    hourlyRate = hr;
}

