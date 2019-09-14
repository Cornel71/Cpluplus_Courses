#include <iostream>
#include <stdio.h>

int main()
{
    using namespace std;

    int nr1, nr2, nr3;

    // adunarea a 2 valori reale,
    // rezultatul este convertit la intreg
    nr1 = 19.99 + 11.99; // 31.98

    // conversie la int
    nr2 = (int) 19.99 + (int) 11.99;   // sintaxa C veche
    nr3 = int (19.99) + int (11.99);  // sintaxa C noua
    int nr4 = int (19.99) + (int) 11.99;

    printf("nr1 = %d, nr2 = %d, nr3 = %d, nr4 = %d", nr1, nr2, nr3, nr4);

    char ch = 'M';
    //int i = ch;

    cout << "\nCodul ASCII pentru  " << ch << " este ";    // afisare ca caracter
    cout << int(ch) << endl;

    cout << "in decimal  " << dec << ch << endl;

    cout.put(254);

    return 0;
}
