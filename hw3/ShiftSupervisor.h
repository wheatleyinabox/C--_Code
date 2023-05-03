class ShiftSupervisor : public Employee
{
    private:
        double annualSalary;
        double annualProductionBonus;
    public:
        ShiftSupervisor(); // ???

        double getAnnualSalary() const;
        double getAnnualProductionBonus() const;

        void setAnnualSalary(double a);
        void setAnnualProductionBonus(int a);
}