/*
Folositi instructiunea for pentru a calcul suma numerelor din intervalul [1,n].
n este introdus de la tastatura.
*/

#include <stdio.h>

int main ()
{
    int n, i, s = 0;

    printf ("Introduceti n: ");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + i;
        printf ("Suma numerelor din intervalul [1, %d] este %d\n", i, s);
    }


    printf ("\n\nSuma numerelor din intervalul [1, %d] este %d\n", n, s);

    return 0;
}
