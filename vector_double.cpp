#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

double arith_avg( vector<double>& lst );
double median(vector<double>& lst);
double arith_avg_file( ifstream& fin );
void read_csv_file( ifstream& csv_data, vector<double>& lst );

bool myfunction (double i, double j) { return (i<j); }

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
     
     // Mittelwert berechnen.
     //ergebnis = arith_avg(SS);
     
     ergebnis = median(SS);
     cout << "Vector: " << ergebnis << endl;  
   }
   else cout << "Unable to open file" << endl;  
   
   
   clock_t ends = clock();
   cout << "Time elapsed " << (double) (ends - start) / CLOCKS_PER_SEC << endl;

}

/* --------------------------------------------- */
/* Arithmetischen Mittelwert berechnen (Vector).  */
/* ----------------------------------------------*/
double arith_avg(vector<double>& lst) {
       
   double avg = 0;
   double summe = 0;
   
   
   // Über das Array iterieren.
   // cout << "Loop by index:" << endl;
   int ii;
   for(ii=0; ii < lst.size(); ii++)
   {
      //cout << lst[ii] << endl;
      summe += lst[ii];
   }
   
   avg = ( summe / lst.size() );
     
   return avg;   
}

/* --------------------------------------------- */
/* Median berechnen (Vektor).                    */
/* ----------------------------------------------*/
double median(vector<double>& lst) {
   long anzahl = 0;
   long index = 0;
   double lwert;
   double rwert;
   double wert;
   
   anzahl = lst.size();
   
   if ( anzahl % 2 ) {  // Falls: eine ungerade Anzahl an Elementen.
   
      // Index des Elementes in der Mitte bestimmen.
      index = ((anzahl + 1 ) / 2) - 1; 
      return lst[index];
   }
   else {               // Falls: eine gerade Anzahl an Elementen.
   
       lwert = lst[(anzahl/2)-1]; // Linker Mittelwert.
       rwert = lst[(anzahl/2)];   // Rechter Mittelwert.
  
       wert = 0.5 * ( lwert + rwert ); // Die Hälfte davon.
       return wert;       
   }

   
}


/* --------------------------------------------- */
/* Arithmetischen Mittelwert berechnen.          */
/* Werte nicht zwischenspeichern.                */
/* --------------------------------------------- */
double arith_avg_file( ifstream& csv_data ) {
       
  double summe = 0;
  double avg = 0;
  double anzahl = 0;
  string line;
   
  while(getline(csv_data,line))
  {
     stringstream  lineStream(line);
     string        cell;
     while(getline(lineStream, cell,','))
     {
        // You have a cell!!!!
        //cout << cell << endl;
        summe  = summe + atof(cell.c_str());
        anzahl++;
     }
  }  
  
  avg = summe / anzahl;
  
  return avg;   
}

/* --------------------------------------------- */
/* Read CSV-File into Vector.                    */
/* --------------------------------------------- */
void read_csv_file( ifstream& csv_data, vector<double>& lst ) {
       
  string line;
   
  while(getline(csv_data,line))
  {
     stringstream  lineStream(line);
     string        cell;
     while(getline(lineStream, cell,','))
     {
        // You have a cell!!!!
        //cout << cell << endl;
        lst.push_back( atof(cell.c_str()) ); 
        
     }
  }  
}





