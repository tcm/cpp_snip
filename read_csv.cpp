#include <iostream>
#include <sstream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream  data("plop.csv");

    string line;
    while(getline(data,line))
    {
        stringstream  lineStream(line);
        string        cell;
        while(getline(lineStream,cell,','))
        {
            // You have a cell!!!!
            cout << cell << endl;
        }
    }
 }
