#include <stdio.h>

int main()
{
    int v[5]= {1,3,5,7,9}, n = 5, i;  // vectorul v avand max 5 valori de tip intreg, n numarul efectiv de elemente folosite

    //modificati codul de la exercitiul precedent pentru a determina elementul minim din vector

    int min = v[5];

    for (i=0; i<n; i++)
    {
        if (v[i] < min) min = v[i];
        printf ("Minimul este : %d\n", min);
    }

    printf ("\nElementul minim din vector este : %d\n", min);
    return 0;
}

