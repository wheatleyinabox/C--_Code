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
#pragma once
struct Date 
{ 
    int month;
    int day;
    int year;
};
class Employee
{
    private:
        std::string name;
        std::string number;
        Date hireDate;
    public:
        Employee(std::string name, std::string number, int month, int day, int year);

        std::string getName() const;
        std::string getNumber() const;
        std::string getHireDate();

        void setName(std::string name);
        void setNumber(std::string number);
        void setHireDate(int month, int day, int year);
};