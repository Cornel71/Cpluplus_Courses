/**

Scrieti numere de la tastatura pana la citirea unui numar negativ si calculeaza suma acestora.

*/

#include <stdio.h>

int main()
{
    int n, suma = 0;

    do
    {
        printf("suma este %d \n",suma);

        printf ("n = ");
        scanf ("%d", &n);

        if(n > 0)
        {
            suma = suma + n;
        }

    } while ( n > 0 );

    printf("suma finala este %d \n",suma);

    return 0;
}

