#include <iostream>

using namespace std;

// Basis-Klasse
class Point {
protected:
 double x;
 double y;

public:
 Point() {
    x = 0;
    y = 0;
 }

 Point(double x0, double y0) {
   x = x0;
   y = y0;
 }
 
 void moveBy(double xd, double yd) {
   x += xd;
   y += yd; 
 }

 void print() {
   cout << x << endl;
   cout << y << endl;
 }

};


// Abgeleitete Klasse
class Circle : public Point {
private:
  double r; // Radius
public:
  Circle(double xcenter, double ycenter, double radius) {
    x = xcenter;
    y = ycenter;
    r = radius;
  }

   void print() { 
    cout << x << endl;
    cout << y << endl;
    cout << r << endl;
   }

};


// Main
int main(int argc, char* argv[])
{
Point p1(2, 1);
p1.moveBy(4, 3);
p1.print();


Circle c1(2,2,2);
c1.print();

return 0;
}
