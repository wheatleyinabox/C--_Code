/*
    Name:       Val DeLeon
    Homework:   2
    Due:        March 22, 2023
    Course:

    Description:
                 Using input from the user, get SIZE and create a
                 function that will dynamically allocate an int array
                 of SIZE with random numbers in a range of 1 to 100
*/

#include <iostream>
#include <iomanip>

using namespace std;

int *allocateDynamicArray(int size)
{
    int *darray = new int[size];
    return darray;
}

int main()
{
    int *darray = nullptr;
    int size, count = 0;
    cout << "Dynamic Array by V. DeLeon" << endl << endl;
    cout << "Enter size? ";
    cin >> size;

    darray = allocateDynamicArray(size);

    for (int i = 0; i < size; i++)
    {
        *(darray + i) = 1 + (rand() % 100);
    }

    cout << endl;

    for (int j = 0; j < size; j++)
    {
        cout << setw(3) << darray[j] << " ";
        count++;
        if (count == 8)
        {
            cout << endl;
            count = 0;
        }
    }

    delete[] darray;
    return 0;
}