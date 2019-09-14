/* Header pt clasa Circle (Circle.h) */

#include <string>   // pt utilizare string-uri

using namespace std;

// declararea clasei Circle

class Circle
{
private:   // Accesibil doar pt membrii acestei clase
    // varilabile / date membru private
    double radius;
    string color;

public:    // Accesibil public
    // Se declara prototipul functiilor membre
    // Constructorul cu valorile predefinite
    Circle (double radius = 1.0, string color = "red");

    // Functii membre
    double getRadius() const;
    void setRadius(double radius);
    string getColor() const;
    void setColor(string color);
    double getArea() const;

};
