#include <stdio.h>

int main()
{
    int v[]= {1,3,5,7,9}, n = 5, i;  // vectorul v de max 5 de intregi, n numarul efectiv de elemente folosite

    //determinatea elementului maxim
    int max = v[0];

    for (i=1; i<n; i++)
    {
        if (v[i] > max) max = v[i];
        printf ("Maximul este : %d\n", max);
    }

    printf ("\nElementul maxim din vector este : %d\n", max);

    return 0;

}

