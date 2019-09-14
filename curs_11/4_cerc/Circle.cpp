/* Implementarea clasei Circle (Circle.cpp) */
#include "Circle.h" // utilizarea header-ului din acelasi folder

// Constructor
// valorile predefinite vor fi specificate doar in declatii
// si nu pot fi repetate
#include <iostream>

using namespace std;


Circle::Circle(double r, string c) {
   radius = r;
   color = c;
}

double Circle::getRadius() const {
   return radius;
}

void Circle::setRadius(double r) {
   radius = r;
}

string Circle::getColor() const {
   return color;
}

void Circle::setColor(string c) {
   color = c;
}

double Circle::getArea() const {
   return radius*radius*3.14159265;
}

int main() {
   // Construirea unei instante pt clasa Circle => c1
   Circle c1(1.2, "red");
   cout << "Radius = " << c1.getRadius() << " Area = " << c1.getArea()
        << " Color = " << c1.getColor() << endl;

   c1.setRadius(2.1);   // schimbarea valorii pt raza si culoare pt c1
   c1.setColor("blue");
   cout << "Radius = " << c1.getRadius() << " Area = " << c1.getArea()
        << " Color = " << c1.getColor() << endl;

   // Construirea unei noi instante avand valorile predefinite
   Circle c2;
   cout << "Radius = " << c2.getRadius() << " Area = " << c2.getArea()
        << " Color = " << c2.getColor()  << endl;

   return 0;
}
