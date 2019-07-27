// Exemplul numarul 8 cu functii
// Functii si vectori
// Citirea si afisarea unui vector folosind functii
#include <stdio.h>

// afiseaza elementele dintr-un vector v dat.
// vectorul contine n elemente
void afisareVector(int v[], int n)
{
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

// citeste de la tastatura valori pentru vectorul v avand n elemente
void citireVector(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Elementul v[%d] este: ", i);
        scanf("%d", &v[i]);
    }
}

int main()
{
    int v[100], n;

    //printf("Numarul de elemente din vector este: ");
    //scanf("%d", &n);

    citireVector(v, 4);
    printf("Elementele din vector sunt: ");
    afisareVector(v, 4);

    return 0;
}
