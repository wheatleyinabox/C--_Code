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
#include <string>
#include "Employee.h"
#pragma once
class ProductionWorker : public Employee
{
    private:
        int shift; // if 1; day, if 2; night
        double hourlyRate;
    public:
        ProductionWorker(std::string name, std::string number, int month, int day, int year, int shift, double hourlyRate);

        int getShift() const;
        double getHourlyRate() const;     

        void setShift(int s);
        void setHourlyRate(double hr);

        friend std::ostream& operator<<(std::ostream& OS, ProductionWorker productionWorker);
};