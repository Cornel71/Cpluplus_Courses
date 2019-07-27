// Exemplul numarul 9 cu functii
// Functii si vectori
// Programul trebuie sa calculeze numarul elementelor mai mici ca media
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

// citeste de la tastatura valori pentru vectorul v avand n elemente
void citireVector(int v[], int n)
{
    int i;
    for (i = 0; i<n; i++)
    {
        printf("Elementul v[%d] este: ", i);
        scanf("%d", &v[i]);
    }
}

// functie ce calculeaza suma elementelor unui vector
int sumaVector(int v[], int n)
{
    int i, suma = 0;

    for (i = 0; i < n; i++)
    {
        suma = suma + v[i];
    }

    return suma;
}

// functie ce calculeaza media elementelor dintr-un vector
float medieVector(int v[], int n)
{
    int s;
    s = sumaVector(v, n);

    float medie = (float)s/n; // cast-ul catre float este necesar pentru ca
                             //altfel rezultatul va fi trunchiat

    return medie;
}


int numarElemente(int v[], int n)
{
    float med = medieVector(v, n);
    int i, nr = 0;

    for (i = 0; i<n; i++)
    {
        // alternativa pentru aceasta linie este v[i] < medieVector(v, n), insa aceasta inseamna ca
        // medieVector este apelat de n ori. Este deci mult mai eficient sa salvam rezultatul si sa
        // il refolosim
        if (v[i] < med)
        {
            nr++;
        }
    }

    return nr;
}

int afisareElementeMaiMiciDecatMedia(int v[], int n, int w[])
{
    float med = medieVector(v, n);
    int i, j = 0;

    //int w[100];
    for (i = 0; i<n; i++)
    {
        // alternativa pentru aceasta linie este v[i] < medieVector(v, n), insa aceasta inseamna ca
        // medieVector este apelat de n ori. Este deci mult mai eficient sa salvam rezultatul si sa
        // il refolosim
        if (v[i] < med)
        {
            w[j] = v[i];
            j++;

        }
    }

    return j;
}

int main()
{
    int v[100], n;
    float medie;

    printf("Numarul de elemente din vector este: ");
    scanf("%d", &n);

    citireVector(v, n);
    printf("Elementele din vector sunt: ");
    afisareVector(v, n);

    medie = medieVector(v, n);
    printf("\nMedia elementelor din vector este %f ", medie);

    int nrElemente = numarElemente(v, n);
    printf("\nNumarul elementelor mai mici ca media este: %d", nrElemente);

    //printf("\nElementele mai mici decat media sunt: ");


    int w[100], d;
    d = afisareElementeMaiMiciDecatMedia (v, n, w);

    printf("\nElementele mai mici decat media sunt: ");
    afisareVector(w, d);

    return 0;
}
