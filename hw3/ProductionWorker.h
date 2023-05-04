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
#include <iostream>
class ProductionWorker : public Employee
{
private:
    int shift; // if 1; day, if 2; night
    double hourlyRate;

public:
    ProductionWorker::ProductionWorker(int s, double hr) : Employee(n, num, d, m, y);

    int getShift() const;
    double getHourlyRate() const;
    void setShift(int s);
    void setHourlyRate(int hr);
};

ostream& operator<<(ostream& OS, ProductionWorker& pw);