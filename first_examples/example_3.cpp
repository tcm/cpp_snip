#include <iostream>
#include <typeinfo>

using namespace std;


template <typename T>
T f_area(T a, T b)
{
   cout << "Flächeninhalt mit " << typeid(a).name() << ": ";
   return a * b / 2;
}



// Main
int main(int argc, char* argv[])
{


float ergebnis = f_area(12.5f, 10.56f);
cout << ergebnis << endl;


double ergebnis2 = f_area(124.5, 140.56);
cout << ergebnis2 << endl;


double ergebnis3 = f_area(124, 140);
cout << ergebnis3 << endl;

return 0;
}
