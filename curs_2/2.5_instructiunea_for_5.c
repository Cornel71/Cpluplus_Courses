/**
    Folositi instructiunea for pentru a citi 5 valori intregi
    de la tastatura si a calcula suma lor.

*/

#include <stdio.h>

int main ()
{
    int a, suma = 0, i;

    printf ("Introduceti numerele: \n");

    for (i = 1; i <= 5; i++) {

        printf ("nr %d = ", i);
        scanf ("%d", &a);

        suma = suma + a;
        printf ("suma = %d\n", suma);
    }

    printf ("\nsuma final este = %d\n", suma);
    return 0;
}
