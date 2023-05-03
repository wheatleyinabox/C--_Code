#include <string>
class ProductionWorker : public Employee
{
private:
    int shift; // if 1; day, if 2; night
    double hourlyRate;

public:
    ProductionWorker::ProductionWorker(int s, double hr) : Employee(string n, int num, int d, int, m, int y);

    int getShift() const;
    double getHourlyRate() const;
    void setShift(int s);
    void setHourlyRate(int hr);
    //  Inherited:
    string getName();
    string getNumber() const;
    Date getHireDate();

    void setName(string n);
    void setNumber(int n) const;
    void setHireDate(int d, int m, int y);
}

// operator overloading: <<