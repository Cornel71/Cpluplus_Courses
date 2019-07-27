#include <stdio.h>

int main()
{
    int v[4], i = 0;  // vectorul v de max 4 valori intregi

    do
    {
        printf ("v[%d] = ", i);
        scanf ("%d", &v[i]);  // citire elemente vector de la tastatura
        i++;
    } while (i < 4);


    printf ("Elementele vectorului v sunt: \n");
    i = 0;
    while (i < 4)
    {
        printf ("v[%d]= %d\t", i, v[i]); // afisare elemente vector
        //printf ("%d ", v[i]);
        i++;
    }

    return 0;
}

