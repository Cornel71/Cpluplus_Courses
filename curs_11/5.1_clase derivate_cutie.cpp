//Base & Derived Classes:

#include <iostream>

using namespace std;

// Base class
class Shape
{
protected:
    int width;
    int height;
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// clasa derivata
class Rectangle: public Shape
{

public:
    int getArea()
    {
        return (width * height);
    }
};

/*
class Rectangle2
{
public:
    int getArea()
    {
        return (width * height);
    }
};
*/

int main()
{
    Shape sh;
    Rectangle Rect;

    //Rectangle2 RectB;

    Rect.setWidth(5);
    Rect.setHeight(7);

    sh.setWidth(5);
//    sh.height = 5;
//    Rect.height = 5;

    //Afiseaza aria
    cout << "Total area: " << Rect.getArea() << endl;
    return 0;
}
