#include <stdio.h>
#include <string.h>

/*
const char * strrchr ( const char * str, int character );
      char * strrchr (       char * str, int character );

*/

int main ()
{
    char sir[] = "Acesta este un alt sir de test";
    char * pch;

    pch = strrchr(sir,'s');
    //printf ("Ultima aparitie a caracterului 's' este pe pozitia cu indexul %d \n",pch-sir);

    printf("Adresa de inceput a sirului : %p \n", sir);
    printf("Adresa cu ultima aparitie a caracterului 's' : %p \n", pch);

    return 0;
}
