/*
* Cititi de la tastatura un sir de caractere folosind functia gets. Afisati apoi sirul pe ecran
*
* Autor: Iulia Iacob
*/

#include<stdio.h>



int main()
{
    char sir[100];

    printf ("Introduceti sirul cu gets: ");
    gets(sir);

//    int m = sizeof(sir);
//    printf("m = %d\n", m);

    printf ("Sirul introdus de la tastatura: ");
    puts(sir);

    printf ("Sirul introdus de la tastatura: \" %10s \" \n", sir);

    return 0;
}
