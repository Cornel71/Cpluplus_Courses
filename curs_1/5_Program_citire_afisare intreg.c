// Program pentru citirea si afisarea unei valori de tip intreg

#include <stdio.h>

int main ()
{
    int mere, pere, fructe;

    printf("Introduceti numarul de mere: ");
    scanf ("%d", &mere);

    printf("Introduceti numarul de pere: ");
    scanf ("%d", &pere);

    fructe = mere + pere;

    printf ("Cineva are %d mere si %d pere => %d fructe. ", mere, pere, fructe);

    return 0;
}
