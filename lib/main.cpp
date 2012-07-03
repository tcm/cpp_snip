#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>
#include <cmath>

//#include "statfunc.h"

using namespace std;


#include "statfunc.h"

main()
{
   vector<double> SS;
   double ergebnis;

   clock_t start = clock();

   /* Berechnen und ausgeben. */
   /* ifstream myfile1 ("plop.csv");   
   ergebnis = arith_avg_file(myfile1);
   cout << "File : " << ergebnis << endl;  */
   
   
   /* Berechnen und ausgeben. */
   ifstream myfile2 ("plop.csv");

   if (myfile2.is_open())
   {
     // Lesen.
     read_csv_file(myfile2, SS);
     
     // Sortieren.
     sort (SS.begin(), SS.end(), myfunction);
     
     // Mittelwerte berechnen.
     // ergebnis = arith_avg(SS);
     // ergebnis = median(SS);
     ergebnis = graph_avg(SS);
     
     
     
     cout << "Vector: " << ergebnis << endl;  
   }
   else cout << "Unable to open file" << endl;  
   
   
   clock_t ends = clock();
   cout << "Time elapsed " << (double) (ends - start) / CLOCKS_PER_SEC << endl;

}
