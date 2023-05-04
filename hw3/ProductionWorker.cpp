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
    this->name = name;
    this->number = number; // error check
    Date hireDate = {month, day, year};
    this->hireDate = hireDate;

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
void ProductionWorker::setHourlyRate(int hr)
{
    hourlyRate = hr;
}

ostream& operator<<(ostream& OS, ProductionWorker& pw)
{
    OS << "Name: " << pw.getName() << endl << 
    "EID: " << pw.getNumber() << endl << 
    "Hire: " << pw.getHireDate() << endl << 
    "Shift: " << pw.getShift() << endl << 
    "Hourly pay rate: " << pw.getHourlyRate();
}