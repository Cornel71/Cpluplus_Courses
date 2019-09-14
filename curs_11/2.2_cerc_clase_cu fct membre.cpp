#include <iostream>

using namespace std;

/*
Dupa cum se poate observa din declaratie, clasa este asemanatoare cu o structura din limbajul C
dar care poate avea in componenta sa membri atat de tip variabila cat si de tip functie.
Pentru datele din interiorul clasei se utilizeaza de obicei termenul de date membre,
iar pentru functii denumirea de functii membre sau metode.
O clasa permite incapsularea in interiorul sau a datelor si a codului.

*/
class Circle   // nume clasa
{
//public: //
private:
    double raza; // Data membra, proprietate, atribut
    string culoare; // Data membra, proprietate, atribut

public:
    double getRaza()    // Functie membra pt citire raza (de tip getter)
    {
        cout << "Raza = ";
        cin >>raza;

        return raza;
    }

    double calculAria()     // Functie membra pt determinare arie
    {
        float PI = 3.14;

        return raza*raza*PI;
    }
};   //declaratia clasei se incheie cu semnul ;


// Functia main
int main( )
{
    Circle C1, C2;

    //C1.raza = 5.5;
    //cout << " Aria = " << C1.calculAria() << endl;

    C1.getRaza();
    cout << " Aria obiect C1 = " << C1.calculAria() << endl;

    cout << " C2 Raza = "<< C2.getRaza() << endl;
    cout << " Aria obiect C2 = " << C2.calculAria() << endl;

    return 0;
}
