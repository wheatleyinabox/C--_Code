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
#include <cstdlib>
#include "Element.h"

using namespace std;

struct Node
{
    Element *element;
    Node *next;
};

Element** get_table(int &size)
{
    Node *head = nullptr;
    ifstream inFile("periodictable.dat"); 
    Element e;
    int count = 0;
    if (!inFile)
    {
        cerr << "Failed to open file." << endl;
        exit(EXIT_FAILURE);
    }

    while (inFile >> e.atomic_number >> e.abbreviation >> e.mass >> e.name)
    {
        Node *node = new Node;
        node->element = new Element;
        *node->element = e;
        node->next = head;
        head = node;
        count++;
    }
    inFile.close();
    size = count;

    Element** arr = new Element*[count];
    Node *current = head;
    int i = count - 1;
    while (current != nullptr)
    {
        *(arr + i) = current->element;
        i--;
        current = current->next;
    }

    Element** arrptr = arr;
    return arrptr;
}