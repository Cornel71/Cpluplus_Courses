#include <stdio.h>

int main()
{
    int v[5] = {1,3,5,7,9}, w[5], i, n = 5;

    //w = v; // eroare !

    printf ("vectorul v initial:\n");
    for (i=0; i<n; i++)
    {
        printf ("v[%d]= %d\n", i, v[i]); // afisare elemente vector
    }

    printf ("\nvectorul w initial:\n");
    for (i=0; i<n; i++)
    {
        printf ("w[%d]= %d\n", i, w[i]); // afisare elemente vector
    }

    for (i=0; i<n; i++)
        w[i] = v[i];

    printf ("\nvectorul w dupa copiere:\n");
    for (i=0; i<n; i++)
    {
        printf ("w[%d]= %d\n", i, w[i]); // afisare elemente vector
    }

    return 0;
}

