#include <iostream>
#include <stdio.h>

int main()
{
    using namespace std;

    int dim = 20;
    char nume[20];
    char desert[dim];

    cout << "Introduceti numele Dvs:\n";
    cin >> nume;  //
    cin.getline(nume, dim-1);  // citeste "dim" caractere de la tastatura, inclusiv ENTER

    cout << "Introduceti desertul preferat:\n";
    cin >> desert;  //
    //fflush(stdin);
    //cin.getline(desert, dim-1);

    cout << "Am pregatit " << desert;
    cout << " pentru Dvs, " << nume << ".\n";

    return 0;
}
