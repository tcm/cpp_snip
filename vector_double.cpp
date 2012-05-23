#include <iostream>
#include <vector>
#include <string>

using namespace std;

double arith_avg( vector<double> );

main()
{
   vector<double> SS;
   double ergebnis;



   ifstream file ( "file.csv" ); // declare file stream: http://www.cplusplus.com/reference/iostream/ifstream/
   string value;
   while ( file.good() )
   { 
      getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
      cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it
   }

   SS.push_back(1);
   SS.push_back(2);
   SS.push_back(3);
   
   SS.push_back(4);
   SS.push_back(4);
   
   SS.push_back(5);
   SS.push_back(5);
   SS.push_back(5);
   
   SS.push_back(6);
   
    ergebnis = arith_avg(SS);
    cout << ergebnis << endl;
}

// Arithmetischen Mittelwert berechnen.
double arith_avg(vector<double> lst) {
       
   double avg = 0;
   double summe = 0;
   
   cout << "Loop by index:" << endl;
   int ii;
   for(ii=0; ii < lst.size(); ii++)
   {
      cout << lst[ii] << endl;
      summe += lst[ii];
   }
   
   avg = ( summe / lst.size() );
     
   return avg;  
    
}

