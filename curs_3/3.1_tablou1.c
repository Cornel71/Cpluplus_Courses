#include <stdio.h>

#define N 10 // macrodefinitii


int main()
{
    int tab[10]; //defineste un tablou de 10 elemente intregi
    //int tab[N]; // definitie echivalenta cu prima

    float v[60]; //defineste un tablou de 60 elemente reale

    // Declararea si initializarea unui vector de 3 numere intregi:
    int azi[3] = { 2, 11, 2018 }; // zi,luna,an

     /*primele trei elemente se initializeaza cu constantele precizate,
    urmatoarele cu 0. Poate fi confuz. Nu e recomandat! */
    int prime[1000] = {1, 2, 3};

    int a[1000] = { 0 };  // toate elementele sunt initializate cu zero

    int numere[2] = {11, 33, 44}; // warning: excess elements in array initializer

    return 0;
}

