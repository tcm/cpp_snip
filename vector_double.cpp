#include <cstdlib> 
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

double arith_avg( vector<double>& lst );
double arith_avg_file( ifstream& fin );
void read_csv_file( ifstream& csv_data, vector<double>& lst );

main()
{
   vector<double> SS;
   double ergebnis;

   /* Berechnen und ausgeben. */
   ifstream myfile1 ("plop.csv");   
   ergebnis = arith_avg_file(myfile1);
   cout << "File : " << ergebnis << endl;  
   
   
   /* Berechnen und ausgeben. */
   ifstream myfile2 ("plop.csv");
   read_csv_file(myfile2, SS);
   ergebnis = arith_avg(SS);
   cout << "Vector: " << ergebnis << endl;  
}

/* --------------------------------------------- */
/* Arithmetischen Mittelwert berechnen (Array).  */
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





