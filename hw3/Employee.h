#include <string>

class Employee
{
    private:
        std::string name;
        int number;
        std::string hireDate;
    public:
        Employee(string name, int number, string hireDate);

        string getName();
        int getNumber() const;
        string getHireDate();

        void setName(string n);
        void setNumber(int n) const;
        void setHireDate(int hd);
}