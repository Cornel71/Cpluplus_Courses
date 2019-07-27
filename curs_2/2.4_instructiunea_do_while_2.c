/*
    Scrieti un program care citeste numere pana la intalnirea unui numar negativ.
    Calculati cate numere mai mari decat 5 au fost introduse de la tastatura.
*/


#include <stdio.h>

int main()
{
    int n;
    //int n = 10;
    int cate_numere = 0;


   do {
        printf ("Introduceti un numar. Pentru a renunta introduceti un numar negativ \n");
        scanf ("%d", &n);
        printf ("Ati intodus valoarea: %d\n", n);

        if (n >= 5)
            //{
            cate_numere++; // cate_numere = cate_numere + 1;
            //}
    } while ( n >= 0 );

    printf("\nAu fost citite %d numere avand valoarea mai mare sau egala cu 5\n",cate_numere);

    return 0;
}

