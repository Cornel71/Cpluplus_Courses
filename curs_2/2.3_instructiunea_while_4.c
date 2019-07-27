/*
    Scrieti un program care citeste caractere pana la intalnirea caracterului "#".
*/


#include <stdio.h>

int main()
{
    char ch;
    int nr_caractere = 0;

    //printf ("c: %c", ch);

    printf ("\nIntroduceti caractere. Pentru a renunta introduceti caracterul #\n");
    //scanf ("%c", &ch);

    while (ch != '#')
    {

        printf ("\nintroduceti un caracter ");
        //fflush(stdin);
        scanf ("\n%c", &ch);

       if (ch != '#')
        {
            nr_caractere++;
            printf ("Ati intodus: %c", ch);
        }

    }

    printf("\nAu fost citite %d caractere \n",nr_caractere);

    return 0;
}

