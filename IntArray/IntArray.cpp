#include <iostream>
#include <cstdlib>
#include "IntArray.h"

using namespace std;

IntArray::IntArray()
{
    numberOfElements = 100;
}
IntArray::IntArray(int size)
{
    bag = new int[size];
    numberOfElements = size;
    for (int i = 0; i < size; i++)
    {
        *(bag + i) = 0;
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
        std::cerr << "IntArray: index " << index << " out of bound." << std::endl;
        std::exit(EXIT_FAILURE);
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
        std::cerr << "IntArray: index " << index << " out of bound" << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

void add(int val);
int *toArray();
std::string toString();