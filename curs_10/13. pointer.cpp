#include <iostream>

/*
În C++ s-au introdus doi operatori noi:
 - pentru alocarea dinamica a memoriei new
 - pentru eliberarea memoriei dinamice delete
destinati sa inlocuiasca functiile de alocare și eliberare.

Operatorul new are ca operand un nume de tip, urmat in general de o valoare initiala pentru variabila creata (intre paranteze rotunde);
rezultatul lui new este o adresa (un pointer de tipul specificat) sau NULL daca nu exista suficienta memorie libera.


*/
int main()
{
    using namespace std;

    double *pn; // pointer catre o variabila de tip double
    double * pa;
    char *pc; // pointer catre o variabila de tip caracter
    int *pi = new int; // pointer catre o variabila de tip int

    double bubble = 3.2;

    pn = &bubble; // pn retine adresa variabilei bubble

    pa = new double[30]; // se aloca dinamic o adresa de memorie pentru  un tablou de 30 elemente

    cout << *pn << endl; // se afiseaza valoarea variabilei bubble


    pc = new char; // se aloca dinamic o adresa de memorie
    *pc = 'S'; // la adresa memorata in pc se pune valoarea 'S'
    cout << *pc << endl; // se afiseaza valoarea


    *pi = 5; // la adresa memorata in pc se pune valoarea 5
    int *p = new int(3);	// alocare cu initializare

    cout << *pi << endl; // se afiseaza valoarea 5
    cout << *p << endl; // se afiseaza valoarea variabilei int  pentru care am facut si initializare (valoarea 3)

    delete p;
    delete pi;
    delete[] pa;
    delete pn;
    delete pc;

    return 0;
}
