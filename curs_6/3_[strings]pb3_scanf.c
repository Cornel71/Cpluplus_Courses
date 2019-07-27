/*
* Cititi de la tastatura un sir de caractere folosind functia scanf. Afisati apoi sirul pe ecran
*
* Autor: Iulia Iacob
*/

#include<stdio.h>

int main()
{
    char sir[20];

    printf ("Introduceti sirul cu scanf:");
    scanf ("%s", sir);
    //scanf ("%[^\n]%*c", sir);

    printf ("Sirul introdus de la tastatura: %s \n", sir);

    printf("Sirul introdus de la tastatura: ");
    puts("Sirul introdus de la tastatura: ");

//    puts(sir);
//    puts ("linistit");
//    printf ("%s", sir);
//    printf ("%s", "linistit");

    return 0;
}
