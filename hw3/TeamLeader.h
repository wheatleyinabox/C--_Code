class TeamLeader : ProductionWorker
{
    private:
        double monthlyBonusAmount;
        int requiredTrainingHours;
        int numOfHoursAttended;
    public:
        TeamLeader(); // ???

        double getMonthlyBonusAmount() const;
        int getRequiredTrainingHours() const;
        int getNumOfHoursAttended() const;

        void setMonthlyBonusAmount(double m);
        void setRequiredTrainingHours(int r);
        void setNumOfHoursAttended(int n);
}