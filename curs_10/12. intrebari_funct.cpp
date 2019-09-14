#include <iostream>
using namespace std;

void intrebari(int);    // prototipul functiei intrebari()

int main()
{
    //using namespace std;

    intrebari(3);       // apelul functiei intrebari()
    cout << "Cate intrebari a pus Vlad ieri? ";
    int numar;
    cin >> numar;
    intrebari(numar);   // call it again
    cout << "Gata! Am invatat sa folosim si functiile :)" << endl;

    return 0;
}

void intrebari(int n)   // definirea functiei intrebari()
{
    //using namespace std;

    cout << "Vlad a pus " << n << " intrebari." << endl;
}                   // functie void, nu are nevoie de return

