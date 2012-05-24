#include <iostream>
#include <sstream>
#include <fstream>
#include <string>


using namespace std;

double read_file(ifstream& fin);


int main()
{
    double ergebnis;

    ifstream  mydata("plop.csv");
    ergebnis = read_file(mydata);
}

double read_file(ifstream& fin)
{
    string line;


    while(getline(fin,line))
    {
        stringstream  lineStream(line);
        string        cell;
        while(getline(lineStream,cell,','))
        {
            // You have a cell!!!!
            cout <<"--"<<cell<<"--"<<endl;
        }
    }
    return 0;
}
