#include <stdio.h>

int main()
{
    int cant_mere[3];    // se creeaza un vector "cant_mere" cu 3 elemente reprezentand cantitatea de mere din 3 locatii diferite
    cant_mere[0] = 7;    // initizarea primului element din vector
    cant_mere[1] = 8;
    cant_mere[2] = 6;

    int pret_mere[3] = {20, 30, 5}; // creare + initializare vector (tablou)

    printf(" cantitatea de mere din locatia 0: %d \n", cant_mere[0]);
    printf(" pretul  merelor din locatia 1: %d \n", pret_mere[1]);

    printf(" cantitatea totala de mere:  %d\n", cant_mere[0] + cant_mere[1] + cant_mere[2]);

    int total = cant_mere[0] * pret_mere[0] + cant_mere[1] * pret_mere[1];
    total = total + cant_mere[2] * pret_mere[2];
    printf(" pretul total al merelor este: %d\n", total);

    printf("\n dimensiunea  unui singur element din tabloul cant_mere in bytes este %d\n", sizeof(cant_mere[0]));
    printf(" dimensiunea  tabloului cant_mere in bytes este %d \n", sizeof(cant_mere));

    return 0;
}
