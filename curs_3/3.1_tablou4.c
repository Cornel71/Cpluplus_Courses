#include <stdio.h>

int main()
{

    int v[4], i;  // vectorul v de max 4 valori intregi

    for (i=0; i<4; i++)
    {
        printf ("v[%d] = ", i);
        scanf ("%d", &v[i]);  // citire elemente vector de la tastatura
    }

    for (i=0; i<4; i++)
    {
        //printf ("v[%d]= %d\t", i, v[i]); // afisare elemente vector
        printf ("%d ", v[i]);
    }

    return 0;
}

