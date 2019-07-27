#include <stdio.h>

/* char * strncat ( char * destination, const char * source, size_t num ); */

int main ()
{
    char sir1[20];
    char sir2[20];

    printf("!Adresa de inceput a sirului 1: %p \n", sir1);
    printf("!Adresa de inceput a sirului 2: %p \n", sir2);

    strcpy (sir1,"To be ");
    printf("\nSirul 1: %s\n", sir1);
    printf("Adresa de inceput a sirului 1: %p \n", sir1);


    strcpy (sir2,"or not to be");
    printf("\nSirul 2: %s\n", sir2);
    printf("Adresa de inceput a sirului 2: %p \n", sir2);

    strncat (sir1, sir2, 6);
    printf("\nSirul 1 dupa concatenare: %s\n", sir1);
    printf("Adresa de inceput a sirului 1: %p \n", sir1);

    return 0;
}
