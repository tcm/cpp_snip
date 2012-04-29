#include <iostream>

using namespace std;


double f_div_val(double x, double y);
double f_div_ptr(const double& x, const double& y);

// Main
int main(int argc, char* argv[])
{

//Value
double ergebnis = f_div_val(5, 10);
cout << ergebnis << endl;


double x=3;
double y=4;

double ergebnis2 = f_div_ptr(x, y);
cout << ergebnis2 << endl;



return 0;
}

//Call by value
double f_div_val(double x, double y)
{
   return x/y;
}

//Call by reference
double f_div_ptr(const double&  x, const double& y)
{
  return x/y;
}
