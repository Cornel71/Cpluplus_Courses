#include <stdio.h>
#include <string.h>

int main ()
{
    char sir[] = "Acesta este un sir de test :)";
    char *pch;
    int i = 0, c;

    printf ("Cautam caracterul 'e' in sirul \"%s\"...\n",sir);
    printf("Adresa de inceput a sirului : %p \n", sir);

    pch = strchr(sir,'e');
    //printf (" pch = %d\n", pch);
    printf (" pch = %p\n", pch);

    if(pch != NULL)
    {
        printf ("A fost gasit pe pozitia cu indexul %d\n",pch-sir);
        printf("Adresa ptr prima aparitie a caracterului 's' : %p \n", pch);
        i=i+1;
    }

    printf ("inainte de while i = %d\n", i);

    while (pch != NULL)
    {
        pch = strchr(pch + 1,'e');
        printf ("A fost gasit pe pozitia cu indexul %d\n",pch-sir);
        printf("Adresa ptr aparitia nr %d a caracterului 's' : %p \n", i, pch);

        if (pch != NULL) i++;
        printf (" i = %d\n", i);

    }

    printf ("dupa while i = %d\n", i);
    printf ("caracterul 'e' apare de %d\n", i);



    return 0;
}
