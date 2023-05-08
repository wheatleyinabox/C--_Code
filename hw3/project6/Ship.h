class Ship
{
    private:
        string shipName;
        string constructionDate;
    public:
        Ship(string shipName, string constructionDate);
        string getShipName();
        string getConstructionDate();

        void setShipName();
        void setConstructionDate();

        // print() *<< overload*
};