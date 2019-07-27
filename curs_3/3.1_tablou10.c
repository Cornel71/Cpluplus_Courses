#include <stdio.h>

int main()
{
    int v[5] = {1,4,5,7,8}, par[5], i, n = 5, j = 0 ;

    //w = v; // eroare !

    for (i=0; i<n; i++)
    {
        if (v[i]%2 == 0)
        {
            par[j] = v[i];
            //printf ("par[%d]= %d\n", j, par[j]); // afisare elemente vector
            j++;
        }
    }

    printf ("\nvectorul cu elemente pare:\n");

    for (i=0; i<j; i++)
    {
        printf ("par[%d]= %d\n", i, par[i]); // afisare elemente vector
    }

    return 0;
}

