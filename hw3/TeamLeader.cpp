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

TeamLeader::TeamLeader(double m, int r, int n, int s, double hr)
{
    monthlyBonusAmount = m;
    requiredTrainingHours = r;
    numOfHoursAttended = n;
    
    shift = s;
    hourlyRate = hr;
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

void TeamLeader::setMonthlyBonusAmount(double m)
{
    monthlyBonusAmount = m;
}
void TeamLeader::setRequiredTrainingHours(int r)
{
    requiredTrainingHours = r;
}
void TeamLeader::setNumOfHoursAttended(int n)
{
    numOfHoursAttended = n;
}