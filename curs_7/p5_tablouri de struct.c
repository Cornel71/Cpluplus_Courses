/**
 * Scrieti un program care pentru citirea de la tastatura a informatiilor
 * despre n (n citit de la tastatura) angajati a unei companii.
 * Un angajat este definit prin: varsta, vechime si nume
 *
 * Implementare cu tablou de structuri
 */

#include <stdio.h>

// vom defini o structura
typedef struct
{
    char nume[50];
    int varsta;
    int vechime;
} ANGAJAT;


void citireAngajati(ANGAJAT angajat[], int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        printf("Numele angajatului %d este: ", i);
        scanf("%s", angajat[i].nume);
        printf("Varsta angajatului este: ");
        scanf("%d", &angajat[i].varsta);
        printf("Vechimea angajatului este: ");
        scanf("%d", &angajat[i].vechime);
    }

}

void afisareAngajat(ANGAJAT angajat)
{
    printf("Numele angajatului este: %s\n", angajat.nume);
    printf("Varsta angajatului este: %d\n", angajat.varsta);
    printf("Vechimea angajatului este: %d\n", angajat.vechime);
}

int main()
{
    ANGAJAT angj[10]; // tabloul de angajati
    int n; // nr de angajati
    int i;

    printf("cati angajati vreti sa introduceti?");
    scanf("%d", &n);

    citireAngajati (angj, n);

    // afisam angajatii
    printf ("\nAfisarea tuturor angajatilor:\n");
    for (i=0; i<n; i++)
    {
        printf ("\Date angajat %d:\n", i);
        afisareAngajat(angj[i]);
    }

    int contor = 0, poz[10], j = 0;
    printf ("\nAfisarea angajatilor cu varsta > 40 si care se numesc Ana:\n");

    for (i=0; i<n; i++)
    {
        if ((angj[i].varsta > 40) && (strcmp(angj[i].nume, "Ana") == 0))
        {
            contor++;
            poz[j] = i;
            j++;
        }

    }

    int m;
    if (contor != 0)
    {
        for (int k = 0; k < j; k++)
        {
            m = poz[k];
            afisareAngajat(angj[m]);
            //afisareAngajat(angj[poz[k]]);
        }
    }
    else
    {
        printf ("NU avem un astfel de angajat");
    }
    return 0;
}
