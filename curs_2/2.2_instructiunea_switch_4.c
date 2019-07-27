/*
Folositi instructiunea switch pentru a afisa o data calendaristica citita de la tastatura
sub forma zi, luna, an (toate numare intregi) in formatul zi/luna/an, unde zi si an vor fi
intregi iar luna va fi sub forma de sir de caractere (Exemplu: Ianuarie, Februarie, etc).

Exemplu: Daca introduceti de la tastatura numerele 24, 12, 2015; data va fi afisata sub forma 24/Decembrie/2015


*/


#include <stdio.h>


int main ()
{
int a, b, luna;
    printf ("Introduceti data in formatul 24, 12, 2015: ");
    scanf ("%d, %d, %d", &a, &luna, &b);

switch (luna)
   {
    case 1:
        printf("%d/Ianuarie/%d", a,b);
        break;
    case 2:
        printf("%d/Februarie/%d", a,b);
        break;
    case 3:
        printf("%d/Martie/%d", a,b);
        break;
    case 4:
        printf("%d/Aprilie/%d", a,b);
        break;
    case 5:
        printf("%d/Mai/%d", a,b);
        break;
    case 6:
        printf("%d/Iunie/%d", a,b);
        break;
    case 7:
        printf("%d/Iulie/%d", a,b);
        break;
    case 8:
        printf("%d/August/%d", a,b);
        break;
    case 9:
        printf("%d/Septembrie/%d", a,b);
        break;
    case 10:
        printf("%d/Octombrie/%d", a,b);
        break;
    case 11:
        printf("%d/Noiembrie/%d", a,b);
        break;
    case 12:
        printf("%d/Decembrie/%d", a,b);
        break;
    }
    return 0;
}
