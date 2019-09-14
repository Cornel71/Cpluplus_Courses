#include <iostream>    // pentru functiile de IO
#include <string>      // pentru string

using namespace std;

class Circle
{
private:
    double radius;      //  Variabila / data membru
    string color;       //  Variabila / data membru

public:
    // Constructor cu valori predefinite pt datele membre
    Circle (double r = 1.0, string c = "red")
    {
        radius = r;
        color = c;
    }

    double afisareRaza()    // Functie membru
    {
        return radius;
    }

    double citireRaza()    // Functie membra pt citire raza (de tip getter)
    {
        cout << "Raza = ";
        cin >>radius;

        return radius;
    }

    string afisareCuloare()     // Functie membru
    {
        return color;
    }

    double calculAria()      // Functie membru
    {
        return radius*radius*3.1416;
    }
};   // declaratie clasei se incheie cu ";' (punct si virgula_)


int main()
{

    // Construirea primul obiect din clasa Circle
    Circle c1(1.2, "blue");

    //cout << " Radius = " <<  c1.radius << endl;
    //cout << " Color = " <<   c1.color << endl;

    cout << " Radius = " << c1.afisareRaza() << " Area = " << c1.calculAria()
         << " Color = " << c1.afisareCuloare() << endl;

    cout << " C1 Raza = "<< c1.citireRaza() << endl;
    cout << " Radius C1 = " << c1.afisareRaza() << " Area = " << c1.calculAria()
         << " Color = " << c1.afisareCuloare() << endl;


    // Construirea unui alt obiect din clasa Circle
    Circle c2(3.4); // culoarea este predefinita
    cout << " Radius = " << c2.afisareRaza() << " Area = " << c2.calculAria()
         << " Color = " << c2.afisareCuloare() << endl;

    // Construirea unui alt obiect din clasa Circle folosind constructorul fara parametrii
    Circle c3;      // culoarea si raza sunt predefinite
    cout << " Radius = " << c3.afisareRaza() << " Area = " << c3.calculAria()
         << " Color = " << c3.afisareCuloare() << endl;

    return 0;
}
