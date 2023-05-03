class ShiftSupervisor : public Employee
{
    private:
        double annualSalary;
        double annualProductionBonus;
    public:
        ShiftSupervisor::ShiftSupervisor(double as, double apb) : Employee(string n, int num, int d, int, m, int y);

        double getAnnualSalary() const;
        double getAnnualProductionBonus() const;

        void setAnnualSalary(double a);
        void setAnnualProductionBonus(int a);
}