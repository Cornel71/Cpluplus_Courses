#include <iostream>

int main()
{
    using namespace std;

    cout << "Introduceti un intreg: ";

    int n;
    cin >> n;

    cout << "n      n*n"<< endl;
    cout << n << "     " << n * n << " (decimal)"<< endl;
// setare mod hexazecimal
    cout << hex;
    cout << n << "      ";
    cout << n * n << " (hexadecimal)"<< endl;

// setare mod octal
    cout << oct << n << "     " << n * n << " (octal)"<< endl;

// o alta metoda de a apela un manipulator
    dec(cout);
    cout << n << "     " << n * n << " (decimal)"<< endl;

    return 0;
}
