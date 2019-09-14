#include <iostream>

int main()
{
    using namespace std;

    int nrMere;            // declarare variabila de tip intreg

    nrMere = 25;            // initializare variabila
    cout << "Azi am cumparat ";
    cout << nrMere;        // afisare valoare variabila
    cout << " mere.";
    cout << endl;          // linie nou. Echivalent cu \n

    nrMere = nrMere - 1;  // modificam variabila
    cout << "Acum mai am " << nrMere << " mere." << endl;

	return 0;
}
