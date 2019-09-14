#include <iostream>

using namespace std;

/*
   1. Sa se defineasca o clasa "Dreptunghi" avand campurile "lungime" si "latime" ,
   constructorul si o funtie membru pentru calculul ariei.
   2. Sa se construiasca 2 obiecte de tip "Dreptunghi" si sa se calculeze aria lor.
*/

class Dreptunghi   // nume clasa
{

    double lungime; // Data membra, proprietate, atribut
    double latime; // Data membra, proprietate, atribut

public:
    Dreptunghi (double lung = 3.4, double lat = 1.0)
    {
        lungime = lung;
        latime = lat;
    }

    double afisareLungime() {  // Functie membru
      return lungime;
   }

    double afisareLatime() {  // Functie membru
      return latime;
   }

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
    Dreptunghi D1 (6.5,8.2);

    cout << " Aria = " << D1.calculAria() << endl;

    Dreptunghi D2;

    cout << " Aria = " << D2.calculAria() << endl;

    return 0;
}
