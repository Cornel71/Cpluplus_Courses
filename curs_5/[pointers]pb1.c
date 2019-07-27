#include <stdio.h>
/*
Se recomanda initializarea pointerilor inainte de folosire pentru a evita situatiile
in care se acceseaza zone de memorie pentru care programul rulat nu are acces.
Accesarea unor zone de memorie nepermise poate cauza erori in program.

*/

int main()
{
    int x = 120, y, z;  // 3 variabile int
    int *p;  // variabila de tip pointer ce poate memora adresa
             // unei variabile de tip intreg


    /*

     1. Putem initializa un pointer cu o adresa de memorie folosind operatorul de referentiere (&)

    */

    p = &x; // atribuie pointerului adresa variabilei int x

    //int *px = &x; // declaratia unui pointer la un intreg si initializare cu adresa variabilei int x

    printf("initial x= %d \n", x);
    printf("initial y= %d \n", y);
    printf("initial z= %d \n", z);

    /*

     2. Putem initializa un pointer cu pointerul NULL

    */

    printf("\n----------------- \n");
    int *pNr;
    pNr = NULL;  // NULL este o constanta predefinita = 0.

    printf("\npNr= %p \n", pNr);


    printf("\n----------------- \n");

    y = *p; // daca p este adresa lui x, y devine egal cu x, adica cu ce e la adresa p
    z = x; // echivalent cu z = *p


    printf("dupa x= %d \n", x);
    printf("dupa y= %d \n", y);
    printf("dupa z= %d \n", z);

    printf("valoarea din p este %p \n", p);
    printf("adresa lui x = %p \n", &x);


    return 0;
}
