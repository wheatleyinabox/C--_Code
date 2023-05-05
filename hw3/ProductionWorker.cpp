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
#include "ProductionWorker.h"

using namespace std;

ProductionWorker::ProductionWorker(string name, string number, int month, int day, int year, int shift, double hourlyRate) : Employee(name, number, month, day, year)
{
    this->shift = shift;
    this->hourlyRate = hourlyRate;
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
void ProductionWorker::setHourlyRate(double hr)
{
    hourlyRate = hr;
}

ostream& operator<<(std::ostream& OS, ProductionWorker& productionWorker)
{
    OS << "Name: " << productionWorker.getName() << endl << 
    "EID: " << productionWorker.getNumber() << endl << 
    "Hire: " << productionWorker.getHireDate() << endl << 
    "Shift: " << productionWorker.getShift() << endl << 
    "Hourly pay rate: " << productionWorker.getHourlyRate();
}