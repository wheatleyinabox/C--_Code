class ShiftSupervisor : public Employee
{
    private:
        double annualSalary;
        double annualProductionBonus;
    public:
        ShiftSupervisor::ShiftSupervisor() : Employee(string n, int num, int d, int, m, int y);

        double getAnnualSalary() const;
        double getAnnualProductionBonus() const;

        void setAnnualSalary(double a);
        void setAnnualProductionBonus(int a);
//  Inherited:
        string getName();
        string getNumber() const;
        Date getHireDate();

        void setName(string n);
        void setNumber(int n) const;
        void setHireDate(int d, int m, int y);
}