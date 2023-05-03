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
#include "get_table.cpp"
#include "print_table.cpp"

using namespace std;

void selectionSort(Element** arr, int size)
{
    int minIndex;
    string minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = arr[start]->name;
        for (int index = start + 1; index < size; index++)
        {
            if (arr[index]->name < minValue)
            {
                minValue = arr[index]->name;
                minIndex = index;
            }
        }
        swap(arr[minIndex], arr[start]);
    }
}

int main()
{
    cout << "Periodic Table by V. DeLeon" << endl << endl;

    int size;
    Element** periodictable_arr = get_table(size);

    if (!periodictable_arr)
    {
        cerr << "Unable to read periodic table." << endl;
        exit(EXIT_FAILURE);
    }
    selectionSort(periodictable_arr, size);
    print_table(periodictable_arr, size);

    return 0;
}