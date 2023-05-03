class TeamLeader : public ProductionWorker
{
    private:
        double monthlyBonusAmount;
        int requiredTrainingHours;
        int numOfHoursAttended;
    public:
        TeamLeader::TeamLeader(double m, int r, int n) : ProductionWorker(s, hr);

        double getMonthlyBonusAmount() const;
        int getRequiredTrainingHours() const;
        int getNumOfHoursAttended() const;

        void setMonthlyBonusAmount(double m);
        void setRequiredTrainingHours(int r);
        void setNumOfHoursAttended(int n);
 // Inherited:
        double getAnnualSalary() const;
        double getAnnualProductionBonus() const;

        void setAnnualSalary(double a);
        void setAnnualProductionBonus(int a);

        string getName();
        string getNumber() const;
        Date getHireDate();

        void setName(string n);
        void setNumber(int n) const;
        void setHireDate(int d, int m, int y);
}