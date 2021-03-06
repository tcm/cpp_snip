#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>
#include <cmath>

using namespace std;


#include "statfunc.h"

/* double arith_avg( vector<double>& lst );
double median(vector<double>& lst);
double graph_avg(vector<double>& lst);

double arith_avg_file( ifstream& fin );
void read_csv_file( ifstream& csv_data, vector<double>& lst );

bool myfunction (double i, double j) { return (i<j); } */



/* --------------------------------------------- */
/* Arithmetischen Mittelwert berechnen (Vector).  */
/* ----------------------------------------------*/
double arith_avg(vector<double>& lst) {
       
   double avg = 0;
   double summe = 0;
   
   
   // �ber das Array iterieren.
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
  
       wert = 0.5 * ( lwert + rwert ); // Die H�lfte davon.
       return wert;       
   }

   
}

/* --------------------------------------------- */
/* Graphisches Mittel (Vektor).                  */
/* ----------------------------------------------*/
double graph_avg(vector<double>& lst) {
   double produkt = 1;
   double anzahl = 0;
   
   anzahl = lst.size();
   
    // �ber das Array iterieren.
   int ii;
   for(ii=0; ii < lst.size(); ii++)
   {
      cout << lst[ii] << endl;
      produkt *= lst[ii];
   }
   
    //cout << produkt << "   ";
    //cout << anzahl << endl;
   return pow(produkt, (1/anzahl)); 
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





