// reading a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
  string line;
  ifstream myfile ("example.txt");


  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file" << endl; 

  return 0;
}
