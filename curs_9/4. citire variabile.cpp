#include <iostream>

int main()
{
    using namespace std;

    int nrMere;

    cout << "Cate mere ai cumparat?" << endl;
    cin >> nrMere;                // C++ input

    //cout << "Acum mai ai: ";
    nrMere = nrMere + 2;

    // urmatoarea linie concateneaza raspunsul
    cout << "Acum ai " << nrMere << " mere." << endl;
    cout << "Iluzoriu ai " << nrMere + 7.8 << " mere." << endl;

    cout << "nrMere =  " << nrMere << endl;

    return 0;
}
