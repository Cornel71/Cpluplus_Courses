/*
Folositi instructiunea for pentru a afisa un mesaj de 5 ori.
*/

#include <stdio.h>

int main ()
{
    int a;

    for (a = 0; a < 5; a++) // a = a + 2
    {
        // printf ("Mesaj din bucla for \n");
        printf ("[%d] Mesaj din bucla for \n", a);

    }

    printf ("\n a = %d ", a);

    printf ("\nBucla for s-a incheiat \n");

    return 0;
}
