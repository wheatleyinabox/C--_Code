#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    ofstream file;
    file.open("input.dat");
    srand(time(0));
    int cap = rand()%256;
    for(int i = 0; i < cap; i++){
        file << static_cast<int>(rand()%100000)/static_cast<int>(rand()%1000);
        if(i < cap-1){
            file << endl;
        }
    }
    file.close();
    return 0;
}