#include <iostream>

struct BUCHET   // declarare structura
{
    char nume[20];
    float pret;
};

int main()
{
    using namespace std;
    BUCHET floriGhiveci =
    {
        "orhidee",          // nume
         29.99              //  pret
    };  // floriGhiveci este o variabila de tip structura BUCHET


    BUCHET floriGradina =
    {
        "bujori",
        3.12
    };  // floriGradina este o a doua variabila de tip structura BUCHET


    cout << "Poti sa asortezi ghiveciul de " << floriGhiveci.nume;
    cout << " cu un buchet de " << floriGradina.nume << "!\n";

    cout << "Le poti avea pe amandoua la pretul de ";
    cout << floriGhiveci.pret + floriGradina.pret << " RON!\n";

    return 0;
}
