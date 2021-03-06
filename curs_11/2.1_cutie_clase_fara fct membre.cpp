#include <iostream>

using namespace std;

/*
Dupa cum se poate observa din aceasta alcatuire a declaratiei,
clasa este asemanatoare cu o structura din limbajul C.

*/

class Cutie
{
public:
    double inaltime;  // Inaltimea unei cutii
    double lungime;   // Lungimea unei cutii
    double latime;    // Latimea unei cutii

};

int main( )
{
    Cutie ct1;        // Declararea unui obiect numit Cutie1 de tip clasa Cutie
    Cutie ct2;        // Declararea unui obiect numit Cutie2 de tip clasa Cutie
    double volum = 0.0;  // Variabila pt volum

    // caracteristici Cutie1
    ct1.inaltime = 5.0;
    ct1.lungime = 6.0;
    ct1.latime = 7.0;

    // caracteristici Cutie2
    ct2.inaltime = 10.0;
    ct2.lungime = 12.0;
    ct2.latime = 13.0;

    // volum cutie 1
    volum = ct1.inaltime * ct1.lungime * ct1.latime;
    cout << "Volumul primei cutii (Cutie1) este : " << volum <<endl;

    // volum cutie 2
    volum = ct2.inaltime * ct2.lungime * ct2.latime;
    cout << "Volumul celei de-a doua cutii (Cutie2) este : " << volum <<endl;

    return 0;
}
