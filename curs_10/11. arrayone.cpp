#include <iostream>

int main()
{
    using namespace std;

    int cantitateProdus[3];    // se creeaza un cantitateProduslou cu 3 elemente
    cantitateProdus[0] = 7;    // atribuire valoare pentru primul element
    cantitateProdus[1] = 8;
    cantitateProdus[2] = 6;

    int pretProdus[3] = {20, 30, 5};


    cout << "Numarul total de produse = ";
    cout << cantitateProdus[0] + cantitateProdus[1] + cantitateProdus[2] << endl;
    cout << "Pachetul cu " << cantitateProdus[1] << " bucati costa ";
    cout << pretProdus[1] << " RON/bucata.\n";

    int total = cantitateProdus[0] * pretProdus[0] + cantitateProdus[1] * pretProdus[1];
    total = total + cantitateProdus[2] * pretProdus[2];
    cout << "Toate produsele costa " << total << " RON.\n";

    cout << "\nDimensiunea tabloului cantitateProdus  = " << sizeof cantitateProdus;
    cout << " bytes.\n"<<endl;
    cout << "Dimensiunea unui element = " << sizeof cantitateProdus[0];
    cout << " bytes.\n";
    // cin.get();
    return 0;
}
