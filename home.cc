#include <stdio.h>

int main()
{
    char ch;
    int nr_caractere = 0;


   do {
        printf ("\nIntroduceti caractere. Pentru a renunta introduceti caracterul #\n");
        scanf ("\n%c", &ch);
        printf ("Ati intodus: %c", ch);
        if (ch != '#')
            nr_caractere++; // cate_numere = cate_numere + 1;
    } while ( ch != '#' );

    printf("\nAu fost citite %d caractere \n",nr_caractere);

    return 0;
}
