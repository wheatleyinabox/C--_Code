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

#include <string>
#pragma once
class IntArray
{
private:
    int numberOfElements;
    const int MAX_SIZE = 100;
    int* bag;
    bool integrityOk(int) const;
public:
    IntArray(int size = 100); // Constructor
    ~IntArray(); // Destructor

    int getLength() const;

    bool add(int val);
    void set(int index, int val);
    int get(int index) const;

    int *toArray();
    std::string toString();
};