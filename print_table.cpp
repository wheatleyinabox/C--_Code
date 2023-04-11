/*
    Name:           Val DeLeon
    Project:        4
    Due:            03/15/23
    Course:         cs2560-01-sp23

    Description:
                    A program that dynamically reads into memory
                    a periodic table from a file. Where functions
                    and structs are defined in seperate files.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void print_table(Element** arr, int size)
{
    double average = 0, averageMass = 0;

    cout << "Name" << setw(23) << "Abr" << setw(4) << "ANo" << setw(7) << "Mass" << endl;
    cout << "----------------------- --- --- ------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << left << setw(23) << arr[i]->name << " ";
        cout << setw(3) << arr[i]->abbreviation << " ";
        cout << right << setw(3) << arr[i]->atomic_number << " ";
        cout << setw(6) << setprecision(2) << fixed << arr[i]->mass << endl;
        average += arr[i]->mass;
    }
    averageMass = average / size;

    cout << setprecision(2) << fixed;
    cout << "The average mass = " << setw(19) << averageMass << endl;
    cout << setprecision(0) << fixed;
    cout << "The number of elements = " << setw(6) << size << endl;
}