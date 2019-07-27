// Citirea mai multor variabile cu un singur scanf

#include <stdio.h>

int main ()
{
    int zi, luna, an = 2015;

    printf("Introduceti data calendaristica in formatul zz-ll-aa: ");

    scanf ("%d-%d-%d", &zi, &luna, &an);

    printf ("Data introdusa este %d/%i/%d", zi, luna, an);

    return 0;
}
