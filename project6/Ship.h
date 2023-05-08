#pragma once
class Ship
{
    private:
        std::string shipName;
        std::string constructionDate;
    public:
        Ship(std::string shipName, std::string constructionDate);
        
        std::string getShipName() const;
        std::string getConstructionDate() const;

        void setShipName(std::string shipName);
        void setConstructionDate(std::string constructionDate);

        // print() *<< overload*
};