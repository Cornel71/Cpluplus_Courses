#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 6;
    int *pArray;

    pArray = new int[SIZE];	// alocare memorie

// atribuie numere aleatoare intre 0 and 99
    for (int i = 0; i < SIZE; i++)
    {
        *(pArray + i) = rand() % 100;
    }

// afisare
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(pArray + i) << " ";
    }

    cout << endl;

    delete[] pArray;	// eliberare memorie

    return 0;
}
