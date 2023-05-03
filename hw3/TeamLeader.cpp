#include <cstdlib>
#include <string>

#include "TeamLeader.h"

using namespace std;

TeamLeader::TeamLeader(double m, int r, int n) : ProductionWorker(int s, double hr)
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