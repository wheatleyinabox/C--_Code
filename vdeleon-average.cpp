/*
    Name:           Val DeLeon
    Homework:       1
    Due:            02/17/23
    Course:         cs2560-01-sp23

    Description:    
                    Using a .dat file, print out each value, 8 at a time, then printing the
                    amount of numbers and its average.

*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Average by V. DeLeon" << endl << endl;
    double number, sum = 0, average = 0;
    int count = 0, line = 0;
    ifstream file;
    file.open("temps.dat");
    // Check if file is open
    // Only set to 0 if you're using it
    // No extra spaces after numbers
    while (file >> number)
    {
        if(line == 8)
        {
            cout << endl;
            line = 0;
        }
        cout << setw(5) << setprecision(1) << fixed;
        cout << number << " ";
        count++;
        sum += number;
        line++;
    }
    cout << endl;
    file.close();
    average = sum / static_cast<double>(count);

    cout << endl;
    cout << "Count   = " << static_cast<int>(count) << endl;
    cout << setprecision(2) << fixed;
    cout << "Average = " << average;
    return 0;
}