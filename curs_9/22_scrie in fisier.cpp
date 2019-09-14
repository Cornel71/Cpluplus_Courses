#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream fisier ("exemplu.txt");

    if (fisier.is_open())
    {
        fisier << "Introducem o linie." << endl;
        fisier << "Introducem o alta linie." << endl;

        fisier.close();
    }
    else cout << "Fisierul nu a putut fi deschis pentru scriere";

    return 0;
}
