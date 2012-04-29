#include <iostream>

using namespace std;


float f_area(float a, float b);
double f_area(double a, double b);
double f_area(double a);

// Main
int main(int argc, char* argv[])
{


float ergebnis = f_area(12.5f, 10.56f);
cout << ergebnis << endl;


double ergebnis2 = f_area(124.5, 140.56);
cout << ergebnis2 << endl;


double ergebnis3 = f_area(124.5);
cout << ergebnis3 << endl;



return 0;
}

// Float
float f_area(float a, float b)
{
   return a * b / 2;
}

// Double
double f_area(double a, double b)
{
   return a * b / 2;
}

// 1 Value 
double f_area(double a)
{
   return a * 140.56 / 2;
}

