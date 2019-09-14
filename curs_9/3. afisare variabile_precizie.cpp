#include <iostream>

using namespace std;

int main()
{
    int pret1 = 2098876;
    float pret2 = 109 + 8.0 / 9.0;

    cout << " Produsul 1 costa " << pret1 << " RON!\n";
    cout << " Produsul 2 costa " << pret2 << " RON!\n";

    cout.precision(10);
    cout << " Produsul 1 costa " << pret1 << " RON!\n";
    cout << " Produsul 2 costa " << pret2 << " RON!\n";
    cout.precision(3);
    cout << " Produsul 2 costa " << pret2 << " RON!\n";

    return 0;
}
