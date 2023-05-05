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
class TeamLeader : public ProductionWorker
{
    private:
        double monthlyBonusAmount;
        int requiredTrainingHours;
        int numOfHoursAttended;
    public:
        TeamLeader(std::string name, std::string number, int month, int day, int year, int shift, double hourlyRate, double monthlyBonusAmount, int requiredTrainingHours, int numOfHoursAttended);

        double getMonthlyBonusAmount() const;
        int getRequiredTrainingHours() const;
        int getNumOfHoursAttended() const;

        void setMonthlyBonusAmount(double m);
        void setRequiredTrainingHours(int r);
        void setNumOfHoursAttended(int n);
};