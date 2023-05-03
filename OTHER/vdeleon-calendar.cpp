/*
    Name:           Val DeLeon
    Project:        2
    Due:            Feb. 15, 2023
    Course:         cs-2560-01-sp23

    Description:
                    Creates a calender for a month in a .txt file, given
                    the month and year (MADE IN VSCODE)
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Is leap year
bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

// Day of the week
int dayOfTheWeek(int month, int day, int year)
{
    int a, y, m, dow;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    dow = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    return dow;
}

// Days in a month
int daysInAMonth(int month, int year)
{
    int dm = 0;
    switch (month)
    {
    case 2:
        dm = isLeapYear(year) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dm = 30;
        break;
    default:
        dm = 31;
        break;
    }
    return dm;
}

std::string getMonthName(int month)
{
    switch (month)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    default:
        return "MONTH DOES NOT EXIST.";
    }
}

int main()
{
    int month, year, dow, days, day = 1;
    cout << "Calendar by V. DeLeon" << endl << endl;
    cout << "Enter month year? ";
    cin >> month >> year;

    ofstream calendar;
    ostringstream str;
    str << "" << month << "-" << year << ".txt";
    string fileName = str.str();

    calendar.open(fileName);
    calendar << getMonthName(month) << " " << year << endl;
    calendar << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
    calendar << "---------------------------------" << endl;

    dow = dayOfTheWeek(month, day, year);
    days = daysInAMonth(month, year);

    for (int d = dow; d < 6; d++)
    {
        calendar << "    ";
    }
    for (int i = 1; i <= days; i++)
    {
        calendar << setw(3) << i;
        dow++;
        if (dow > 6)
        {
            dow = 0;
            calendar << endl;
        }
        else
        {
            calendar << "  ";
        }
    }
    calendar << endl;
    calendar.close();

    cout << endl << fileName << " file generated.";
    return 0;
}