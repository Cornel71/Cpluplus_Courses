#include <iostream>

struct BUCHET
{
    char nume[20];
    int cantitate;
    float pret;
};

int main()
{
    using namespace std;

    BUCHET flori[2] =          // initializare tablou de structuri
    {
        {"lalele", 5, 21.99},      // prima structura din tablou
        {"narcise", 10, 10.99}    //  urmatoarea structura din tablou
    };

    cout << "Am cumparat azi un buchet de " << flori[0].nume << " si " << flori[1].nume
         << "\nce avea "
         << flori[0].cantitate + flori[1].cantitate << " fire.\n";

    return 0;
}
