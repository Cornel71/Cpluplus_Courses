#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream fisier;

    fisier.open ("exemplu.txt");

    fisier << "Mesaj demonstrativ pentru scrierea in fisiere." << endl;
    fisier << "Alt Mesaj" << endl;

    fisier.close();

    return 0;
}
