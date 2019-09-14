#include <iostream>

using namespace std;

int main()
{
    using namespace std;

    int nr1 = 42;
    int nr2 = 42;
    int nr3 = 42;

    cout << "Afisarea numerelor in diverse baze de numeratie!"  << endl;
    cout << "nr1 = " << nr1 << " (42 in baza 10)" << endl;

    cout << hex;      // manipulator pentru schimbare baza
    cout << "nr2 = " << nr2 << " (42 in baza 16)" << endl;
    cout << "nr1 = " << nr1 << " (42 in baza 16)" << endl;

    cout << oct;      // manipulator pentru schimbare baza
    cout << "nr3 = " << nr3 << " (42 in baza 8)" << endl;
    cout << "nr1 = " << nr1 << " (42 in baza 8)" << endl;

    cout << dec;
    cout << "nr1 = " << nr1 << " (42 in baza 10)" << endl;

    cout << hex << "in hexa = " << nr1 << dec << " in zecimal = " << nr1 <<  endl;

    return 0;
}
