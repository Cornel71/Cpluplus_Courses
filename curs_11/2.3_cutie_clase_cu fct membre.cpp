#include <iostream>

using namespace std;

/*
Dupa cum se poate observa din aceasta alcatuire a declaratiei, clasa este asemanatoare cu o structura din limbajul C
dar care poate avea in componenta sa membri atat de tip variabila cat si de tip functie.
Pentru datele din interiorul clasei se utilizeaza de obicei termenul de date membre,
iar pentru functii denumirea de functii membre sau metode.
O clasa permite incapsularea in interiorul sau a datelor si a codului.
*/

class Cutie
{
    double lungime;   // Lungimea unei cutii
    double latime;    // Latimea unei cutii
    double inaltime;  // Inaltimea unei cutii

public:
    // declararea functiilor membre
    double calcVolum(void);
    void setareLungime( double lung );
    void setareLatime( double lat );
    void setareInaltime( double inalt );
    void setareALL(double, double, double);
};

// Declararea functiilor membre
void Cutie::setareALL( double x, double y, double z)
{
    lungime = x;
    latime = y;
    inaltime = z;
}

double Cutie::calcVolum(void)
{
    return lungime * latime * inaltime;
}

void Cutie::setareLungime( double lung )
{
    lungime = lung;
}

void Cutie::setareLatime( double lat )
{
    latime = lat;
}

void Cutie::setareInaltime( double inalt )
{
    inaltime = inalt;
}

// Functia main
int main( )
{
    Cutie Cutie1;        // Declararea unui obiect numit Cutie1 de tip clasa Cutie
    Cutie Cutie2;        // Declararea unui obiect numit Cutie2 de tip clasa Cutie
    Cutie ct3;
    double volum = 0.0;  // Variabila pt volum

    ct3.setareALL(3,5,6);
    volum = ct3.calcVolum();
    cout << "Volumul primei cutii (Cutie3) este : " << volum <<endl;

    // caracteristici Cutie1
    Cutie1.setareLungime(6.0);
    Cutie1.setareLatime(7.0);
    Cutie1.setareInaltime(5.0);

    // caracteristici Cutie2
    Cutie2.setareLungime(12.0);
    Cutie2.setareLatime(13.0);
    Cutie2.setareInaltime(10.0);

    // volum cutie 1
    volum = Cutie1.calcVolum();
    cout << "Volumul primei cutii (Cutie1) este : " << volum <<endl;

    // volum cutie 2
    volum = Cutie2.calcVolum();
    cout << "Volumul celei de-a doua cutii (Cutie2) este : " << volum <<endl;

    return 0;
}
