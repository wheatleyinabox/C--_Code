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

#include "TeamLeader.h"

using namespace std;

TeamLeader::TeamLeader(string name, string number, int month, int day, int year, int shift, double hourlyRate, double monthlyBonusAmount, int requiredTrainingHours, int numOfHoursAttended) : ProductionWorker(name, number, month, day, year, shift, hourlyRate)
{
    this->name = name;
    this->number = number;
    Date hireDate = {month, day, year};
    this->hireDate = hireDate
    
    this->shift = shift;
    this->hourlyRate = hourlyRate;

    this->monthlyBonusAmount = monthlyBonusAmount;
    this->requiredTrainingHours = requiredTrainingHours;
    this->numOfHoursAttended = numOfHoursAttended;
}

double TeamLeader::getMonthlyBonusAmount() const
{
    return monthlyBonusAmount;
}
int TeamLeader::getRequiredTrainingHours() const
{
    return requiredTrainingHours;
}
int TeamLeader::getNumOfHoursAttended() const
{
    return numOfHoursAttended;
}

void TeamLeader::setMonthlyBonusAmount(double monthlyBonusAmount)
{
    this->monthlyBonusAmount = monthlyBonusAmount;
}
void TeamLeader::setRequiredTrainingHours(int requiredTrainingHours)
{
    this->requiredTrainingHours = requiredTrainingHours;
}
void TeamLeader::setNumOfHoursAttended(int numOfHoursAttended)
{
    this->numOfHoursAttended = numOfHoursAttended;
}