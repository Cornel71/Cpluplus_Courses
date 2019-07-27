#include <stdio.h>
#include <string.h>
/*

const char * strchr ( const char * str, int character );
      char * strchr (       char * str, int character );

*/
int main ()
{
    char sir[] = "Acesta este un sir de test";
    char *pch;
    char *pch1;

    int contor = 0;
    printf("\n-----------------------------------\n");

    pch = strchr(sir,'t');

    while (pch != NULL)
    {
       contor ++;

       printf ("pch ca pointer = %p \n", pch);
       printf ("pch ca sir = %s\n", pch);
       printf ("------------\n\n");

       pch = strchr(pch+1, 't');

    }

    printf ("pch ca pointer = %p \n", pch);
    printf ("pch ca sir = %s\n", pch);

    printf (" contor = %d", contor);

//    printf("\n-----------------------------------\n");
//    pch1 = strchr(pch+1,'e');
//    printf ("A doua aparitie a caracterului 'e' este pe pozitia cu indexul %d \n",pch1-sir);
//
//    printf("Adresa de inceput a sirului : %p \n", sir);
//    printf("Adresa cu prima aparitie a caracterului 'e' : %p \n", pch);
//    printf("Adresa cu a doua aparitie a caracterului 'e' : %p \n", pch1);

//    printf("Sir : %s \n", sir);
//    printf("Pch : %s \n", pch);


    return 0;
}
