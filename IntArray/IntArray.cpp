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

#include <cstdlib>
#include <string>

#include "IntArray.h"

using namespace std;

IntArray::IntArray(int size)
{
    if (size <= MAX_SIZE)
    {
        bag = new int[size];
        numberOfElements = 0;
    }

    else
    {
        cerr << "IntArray: Size exceeds maximum of " << MAX_SIZE << " elements." << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray::getLength() const
{
    return numberOfElements;
}

IntArray::~IntArray()
{
    delete[] bag;
}

bool IntArray::integrityOk(int index) const
{
    return index >= 0 || index < numberOfElements;
}

void IntArray::set(int index, int val)
{
    if (integrityOk(index))
    {
        *(bag + index) = val;
    }
    else
    {
        cerr << "IntArray: index " << index << " out of bound." << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray::get(int index) const
{
    if (integrityOk(index))
    {
        return *(bag + index);
    }
    else
    {
        cerr << "IntArray: index " << index << " out of bound" << endl;
        exit(EXIT_FAILURE);
    }
}

bool IntArray::add(int val)
{
    if (numberOfElements >= MAX_SIZE)
    {
        int newLength = numberOfElements * 2;
        int *newBag = new int[newLength];
        memcpy(newBag, bag, numberOfElements * sizeof(int));
        numberOfElements = newLength;
        delete[] bag;
        bag = newBag;
        return false;
    }
    else
    {
        *(bag + numberOfElements) = val;
        numberOfElements++;
        return true;
    }
}

int *IntArray::toArray()
{
    int *copy = new int[numberOfElements];
    copy = bag;
    return copy;
}

string IntArray::toString()
{
    string str;
    for (int i = 0; i < numberOfElements; i++)
    {
        str += to_string(*(bag + i)) + ",";
    }
    str = str.substr(0, str.size() - 1);
    return str;
}