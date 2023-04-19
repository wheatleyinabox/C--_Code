/*
    Name:       Val DeLeon
    Project:    5
    Due:        April 19, 2023
    Course:

    Description:
                Using classes and pointer, create an IntArray class that essentially creates a bag of ints,
                which are loaded in using a .dat file. Then use them to print the data count, values, sum,
                and average.
*/

#include <iostream>
#include <fstream>
#include "IntArray.cpp"
using namespace std;

int main()
{
    cout << "IntArray by V. DeLeon" << endl
         << endl;

    int sum, num;
    IntArray *ia = new IntArray();
    
    ifstream file;
    file.open("input.dat");

    while (file >> num)
    {
        ia->add(num);
    }
    int *bagPtr = ia->toArray();

    cout << "Data count = " << ia->getLength() << endl;
    cout << "Values = " << ia->toString() << endl;

    for (int i = 0; i < ia->getLength(); i++)
    {
        sum += *(bagPtr + i);
    }
    cout << "Sum = " << sum << endl;
    sum = sum / ia->getLength();
    cout << "Average = " << sum << endl << endl;

    for (int c = 0; c < ia->getLength(); c++)
    {
        ia->set(c, c + 1);
    }
    cout << "New values = " << ia->toString() << endl;
    cout << "Val @ arr[0]: " << ia->get(0) << endl;
    cout << "Val @ arr[" << ia->getLength() << "]: " << ia->get(ia->getLength()-1) << endl;

    return 0;
}