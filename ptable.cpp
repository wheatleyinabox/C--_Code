#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Element
{
    string name;
    string symbol;
};
struct Node
{
    Element *element;
    Node *next;
};

Node* loadTable()
{
    Node *head = nullptr;
    ifstream inFile("periodictable2.dat");
    Element e;
    int count = 0;

    if (!inFile)
    {
        cerr << "Failed to open file." << endl;
        exit(EXIT_FAILURE);
    }

    while (inFile >> e.symbol >> e.name)
    {
        Node *node = new Node;
        node->element = new Element;
        *node->element = e;
        node->next = head;
        head = node;
        count++;
    }
    inFile.close();

    return head;
}

string searchSymbol(Node* head, string symbol)
{
    string result;
    Node *current = head;
    while (current != nullptr)
    {
        if (current->element->symbol == symbol)
        {
            result = current->element->name;
        }
        current = current->next;
    }

    if (result.empty())
    {
        result = "Not found";
    }

    return result;
}

int main()
{
    string symbol, name;
    cout << "Enter symbol? ";
    cin >> symbol;

    Node* head = loadTable();
    name = searchSymbol(head, symbol);
    cout << name;

    return 0;
}