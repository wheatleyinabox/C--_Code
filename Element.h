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

#include <string>

struct Element
{
    int atomic_number;
    std::string abbreviation;
    double mass;
    std::string name;
};

Element **get_table(int &size);
void print_table(Element **periodictable_arr, int size);