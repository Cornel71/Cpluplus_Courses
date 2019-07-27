#include <stdio.h>

int main()
{
    int v[100], n, i;  // vectorul v de max 100 de intregi, n numarul efectiv de elemente folosite

    //citirea si afisarea unui vector de întregi:
    printf ("Introduceti n (numarul efectiv de elemente folosite): ");
    scanf ("%d",&n); // citeste nr efectiv de elemente din vector

    for (i=0; i<n; i++)
    {
        printf ("v[%d] = ", i);
        scanf ("%d", &v[i]);  // citire elemente vector de la tastatura
    }

    for (i=0; i<n; i++)
    {
        printf ("v[%d]= %d\n", i, v[i]); // afiseaza elemente vector
        //printf ("%d ", v[i]);
    }

    //suma elementelor 0..n-1 din vectorul v
    int s = 0;

    for (i=0; i<n; i++)
    {
        s = s + v[i];
    }

    printf ("Suma elementelor din vectorul v: %d\n", s);

    return 0;
}

