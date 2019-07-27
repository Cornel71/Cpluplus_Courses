// Exemplul numarul 10 cu functii
// Functii vectori si matrici
// Programul citeste si afiseaza o matrice

#include <stdio.h>

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


// afiseaza elementele dintr-un vector v dat.
// vectorul contine n elemente
void afisareVector(int v[], int n)
{
    int j;

    for (j = 0; j < n; j++)
    {
        printf("%d ", v[j]);
    }
}

// afiseaza o matrice a, cu l linii si c coloane
void afisareMatrice(int a[][10], int l, int c)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
//        for (j = 0; j < c; j++)
//        {
//            printf("%d ", a[i][j]);
//        }

        // for-ul de mai sus este echivalent cu un apel catre functia de apelare vector
        afisareVector(a[i], c);
        printf("\n");
    }
}

int main()
{
    int a[5][10], nrLinii, nrColoane;

    printf("Nr de linii: ");
    scanf("%d", &nrLinii);

    printf("Nr de coloane: ");
    scanf("%d", &nrColoane);

    citireMatrice(a, nrLinii, nrColoane);

    printf("Elementele din matrice sunt: \n");
    afisareMatrice(a, nrLinii, nrColoane);

    return 0;
}
