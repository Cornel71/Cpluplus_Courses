#include <iostream>

struct BUCHET
{
    char nume[20];
    float pret;
};

int main()
{
    using namespace std;

    BUCHET floriDeVara =
    {
        "margarete",
         12.49
    };


    cout << "Buchetul de " << floriDeVara.nume << " costa ";
    cout << floriDeVara.pret << " RON "<<endl;

    BUCHET floriPreferate;
    floriPreferate = floriDeVara;  // operatia de  atribuire

    cout << "Florile preferate sunt " << floriPreferate.nume << " si costa ";
    cout << floriPreferate.pret << " RON "<<endl;

    return 0;
}
