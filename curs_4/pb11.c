// Exemplul numarul 11 cu functii
// Functii vectori si matrici
// Programul trebuie media elementelor de pe fiecare linie a unei matrici
#include <stdio.h>

// afiseaza elementele dintr-un vector v dat.
// vectorul contine n elemente
void afisareVector(int v[], int n)
{
    int i;

    for (i = 0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
}

// citeste de la tastatura o matrice a, cu l linii si c coloane
void citireMatrice(int a[][10], int l, int c)
{
    int i, j;

    for (i = 0; i<l; i++)
        for (j = 0; j<c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
}

// afiseaza o matrice a, cu l linii si c coloane
void afisareMatrice(int a[][10], int l, int c)
{
    int i, j;

    for (i = 0; i<l; i++)
    {
        //for (j = 0; j<c; j++)
        //{
        // printf("%d ", a[i][j]);
        //}
        // for-ul de mai sus poate fi inlocuit de apel catre functia de apelare vector
        afisareVector(a[i], c);
        printf("\n");
    }
}

// functie ce calculeaza suma elementelor unui vector
int sumaVector(int v[], int n)
{
    int i, suma = 0;

    for (i = 0; i<n; i++)
    {
        suma = suma + v[i];
    }

    return suma;
}

// functie ce calculeaza media elementelor dintr-un vector
float medieVector(int v[], int n)
{
    float medie = (float)sumaVector(v, n)/n; // cast-ul catre float este necesar pentru ca altfel c-ul truncheaza rezultatul

    return medie;
}

// caluleaza mediile de pe fiecare linie din matricea a
void mediePeLinie(int a[][10], int l, int c, float v[])
{
    int i;

    for(i = 0; i < l; i++)
    {
        v[i] = medieVector(a[i], c);
    }

}

int main()
{
    int a[100][10], nrLinii, nrColoane, i;
    float medii[100];

    printf("Nr de linii: ");
    scanf("%d", &nrLinii);

    printf("Nr de coloane: ");
    scanf("%d", &nrColoane);

    citireMatrice(a, nrLinii, nrColoane);

    printf("Elementele din matrice sunt: \n");

    afisareMatrice(a, nrLinii, nrColoane);

    mediePeLinie(a, nrLinii, nrColoane, medii);

    for(i = 0; i<nrLinii; i++)
    {
        printf("Media de pe linia %d este %.2f\n", i, medii[i]);
    }

    return 0;
}
