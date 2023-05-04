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
struct Date 
{ 
    int month;
    int day;
    int year;
};

class Employee
{
    protected:
        std::string name;
        std::string number;
        Date hireDate;
    public:
        Employee(std::string name, std::string number, int month, int day, int year);

        std::string getName();
        std::string getNumber() const;
        Date getHireDate();

        void setName(std::string n);
        void setNumber(int n) const;
        void setHireDate(int d, int m, int y);
};