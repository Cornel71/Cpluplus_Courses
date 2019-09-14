#include <iostream>

/*
   1. Sa se defineasca o clasa "Dreptunghi" avand campurile "lungime" si "latime" , constructorul si o funtie membru pentru calculul ariei.
   2. Sa se construiasca 2 obiecte de tip "Dreptunghi" si sa se calculeze aria lor.
*/

using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle ();
    Rectangle (int);
    Rectangle (int,int);
    int area (void);
};

Rectangle::Rectangle ()
{
    width = 5;
    height = 5;
}

Rectangle::Rectangle (int a, int b)
{
    width = a;
    height = b;
}

Rectangle::Rectangle (int a)
{
    width = a;
    height = 7;
}

int Rectangle::area ()
{
  return (width*height);
}

int main ()
{
    Rectangle rectA (3,4);
    Rectangle rectB;
    Rectangle rectC(5);

    cout << "rect area: " << rectA.area() << endl;
    cout << "rectb area: " << rectB.area() << endl;
    cout << "rectc area: " << rectC.area() << endl;

    return 0;
}
