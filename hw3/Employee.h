#include <string>

struct Date 
{ 
    int day;
    int month;
    int year;
};

class Employee
{
    private:
        std::string name;
        std::string number;
        Date hireDate;
    public:
        Employee(string n, int num, int d, int, m, int y);

        string getName();
        string getNumber() const;
        Date getHireDate();

        void setName(string n);
        void setNumber(int n) const;
        void setHireDate(int d, int m, int y);
}