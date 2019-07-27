#include<stdio.h>
#include<string.h>

/* char * strcat ( char * destination, const char * source ); */

int main()
{
    char sir[80];
    char sir2[]= "concatenate.";

    printf("\n -----------------\n");
    printf("sir: %s\n", sir);

    char t = '\0';
    printf("t: %d\n", t);


    printf("\n -----------------\n");
    strcpy (sir,"Aceste ");
    printf("\npas 1: %s\n", sir);
    printf("Adresa de inceput a sirului : %p \n", sir);

    strcat (sir,"siruri ");
    printf("\npas 2: %s\n", sir);
    printf("Adresa de inceput a sirului : %p \n", sir);

    strcat (sir,"sunt ");
    printf("\npas 3: %s\n", sir);

    strcat (sir,sir2);
    printf("Adresa de inceput a sirului : %p \n", sir);

    printf("\nsir final: %s\n", sir);
    printf("Adresa de inceput a sirului : %p \n", sir);

    return 0;
}
