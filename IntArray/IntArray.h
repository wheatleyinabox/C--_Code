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