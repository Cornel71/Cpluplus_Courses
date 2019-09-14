#include <iostream>

using namespace std;

/*
   1. Sa se defineasca o clasa "Dreptunghi" avand campurile "lungime" si "latime"
      si 2 functii membre: una pt setarea valorilor si una pentru calculul ariei.
   2. Sa se declare 2 obiecte de tip "Dreptunghi" si sa se calculeze aria lor.
*/

class Dreptunghi   // nume clasa
{

    double lungime; // Data membra, proprietate, atribut
    double latime; // Data membra, proprietate, atribut

public:
    double getLungime()    // Functie membra pt citire raza (de tip getter)
    {
        cout << "Lungimea = ";
        cin >>lungime;

        return lungime;
    }

    double getLatime()    // Functie membra pt citire raza (de tip getter)
    {
        cout << "Latimea = ";
        cin >>latime;

        return latime;
    }
    double calculAria()     // Functie membra pt determinare arie
    {
        return lungime*latime;
    }
};   //declaratia clasei se incheie cu semnul ;


// Functia main
int main( )
{
    Dreptunghi D1, D2;

    cout << " Lungime D1 = "<< D1.getLungime() << endl;
    cout << " Latime D1 = "<< D1.getLatime() << endl;
    cout << " Aria = " << D1.calculAria() << endl;

    cout << " Lungime D2 = "<< D2.getLungime() << endl;
    cout << " Latime D2 = "<< D2.getLatime() << endl;
    cout << " Aria = " << D2.calculAria() << endl;

    return 0;
}
