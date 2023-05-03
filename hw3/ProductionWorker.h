class ProductionWorker : public Employee
{
    private:
        int shift; // if 1; day, if 2; night
        double hourlyRate;
    public:
        ProductionWorker(); // ???

        int getShift() const;
        double getHourlyRate() const;

        void setShift(int s);
        void setHourlyRate(int hr);
}

// operator overloading: <<