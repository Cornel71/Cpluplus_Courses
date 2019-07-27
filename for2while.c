#include <stdio.h>

int main ()
{
    int a, suma = 0, i = 0;

    printf ("Introduceti numerele: \n");

    for (i = 1; i <= 5; i++) {

        printf ("nr %d = ", i);
        scanf ("%d", &a);

        suma = suma + a;
        printf ("suma = %d\n", suma);
    }
//
//    while(i < 5)
//    {
//        printf ("nr %d = ", i);
//        scanf ("%d", &a);

//        suma = suma + a;
//        printf ("suma = %d\n", suma);

//        i++; // cate_numere = cate_numere + 1;
//    }


    printf ("\nsuma final este = %d\n", suma);
    return 0;
}
