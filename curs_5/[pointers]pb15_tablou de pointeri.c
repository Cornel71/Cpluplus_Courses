#include <stdio.h>
/*
int main () {

   int  tab[] = {10, 100, 200};
   int i, n = 3;

   for (i = 0; i < n; i++) {
      printf("Valoarea lui tab[%d] = %d\n", i, tab[i] );
   }

   return 0;
}
*/

int main ()
{

    int  tab[] = {10, 100, 200};
    int n = 3;
    int i, *ptr[3];

    for ( i = 0; i < n; i++)
    {
        ptr[i] = &tab[i]; // se atribuie pentru fiecare element din
        //vectorul ptr adresa fiecarui element din vectorul var
    }

    for ( i = 0; i < n; i++)
    {
        printf("Valoarea lui tab[%d] = %d\n", i, *ptr[i] );
    }

    for ( i = 0; i < n; i++)
    {
        printf("Valoarea lui tab[%d] (varianta**) = %d\n", i, **(ptr+i) );
    }


    printf("Adresa lui tab  = %p\n", tab);

    for ( i = 0; i < n; i++)
    {
        printf("Valoarea lui ptr[%d] = %p\n", i, ptr[i] );
    }

    return 0;
}


