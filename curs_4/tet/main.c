/*
* Determinati numarul de caractere ale unui sir si afisati sirul
* caracter cu caracter folosind o instructiune repetitiva for.
*
* Autor: Iulia Iacob
*/

#include<stdio.h>
#include<string.h>

int lungSir(char sir[])
{
    int dim = 0, i= 0;

    while (sir[dim] != '\0')
    {
//        if(sir[dim] == 'v')
//        {
//            i++;
//        }
        dim++;
    }

    return dim;
}

int main()
{
    char sir[100]="Salut Clasa";
    int i, n, m;

    n = lungSir(sir);
    printf ("dimensiunea sirului \"%s\" este %d",sir, n);
    printf ("\nsizeof %d  ", sizeof(sir));

    m = strlen(sir);
    printf ("\ndimensiunea sirului \"%s\" este %d",sir, m);

    printf ("\nsirul afisat caracter cu caracter: ");

    for (i = 0; i < m; i++)
        printf ("%c - ", sir[i]);

    //printf ("\n%s", sir);


    return 0;

}
