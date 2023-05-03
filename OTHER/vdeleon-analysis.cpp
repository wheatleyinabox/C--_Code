/*
    Name:           Val DeLeon
    Project:        3
    Due:            03/03/23
    Course:         cs2560-01-sp23

    Description:
                    Using a data file, calculate standard deviation
                    with a set of int values, and output the results, formatted
                    in an output file
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int readData(string file_name, int numbers[], int ARR_SIZE);
double calculateStats(int numbers[], int actualSize, int &, int &, double &);

int readData(string file_name, int numbers[], int ARR_SIZE)
{
    ifstream input;
    input.open(file_name);
    int val;
    int numberOfItems = 0;
    while (input >> val)
    {
        if (!input)
        {
            cout << file_name << " not found." << endl;
            return 0;
        }

        if (numberOfItems > ARR_SIZE)
        {
            cout << "Out of range, too many values." << endl;
            return 0;
        }
        else
        {
            numbers[numberOfItems] = val;
            numberOfItems++;
        }
    }
    input.close();
    return numberOfItems;
}

double calculateStats(int numbers[], int actualSize, int &min, int &max, double &std_dev)
{
    double total = 0, average, sum_diff = 0;
    min = numbers[0];
    max = numbers[0];
    for (int i = 0; i < actualSize; i++)
    {
        total += numbers[i];
        if (max < numbers[i])
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        } 
    }

    average = total / static_cast<double>(actualSize);
    
    for (int j = 0; j < actualSize; j++)
    {
        sum_diff += pow((numbers[j] - average), 2);
    }
    std_dev = sqrt(sum_diff / (actualSize));
    
    return average;
}

int main()
{
    const int SIZE = 256;
    int numbers[SIZE];

    string fileName_input;
    string fileName_output;
    int actualSize, min = 0, max = 0;
    double average, std_dev = 0;

    cout << "Data Analysis by V. DeLeon" << endl
         << endl;
    cout << "Enter the input file name: ";
    cin >> fileName_input;
    cout << "Enter the output file name: ";
    cin >> fileName_output;

    actualSize = readData(fileName_input, numbers, SIZE);
    if (actualSize == 0)
    {
        cout << endl
             << "Empty input file." << endl;
        return 0;
    }

    average = calculateStats(numbers, actualSize, min, max, std_dev);

    cout << endl;
    ofstream output;
    output.open(fileName_output);
    if (!output)
    {
        cout << "Unable to create " << fileName_output << "." << endl;
        output.close();
        return 0;
    }
    else
    {
        output << "File:    " << fileName_input << endl;
        output << "Count:" << setw(7) << actualSize << endl;
        output << "Highest:" << setw(5) << max << endl;
        output << "Lowest:" << setw(6) << min << endl;
        output << setprecision(2) << fixed;
        output << "Average:" << setw(8) << average << endl;
        output << "Std Dev:" << setw(8) << std_dev << endl
           << endl;
        output << "Data:" << endl;
        int count = 0;
        for (int i = 0; i < actualSize; i++)
        {
            if (count == 10)
            {
                output << endl;
                count = 0;
            }
            output << setw(5) << numbers[i];
            count++;
        }
        output.close();
        cout << actualSize << " numbers processed." << endl;
    }
    return 0;
}