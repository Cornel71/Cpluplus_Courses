/*
    Scrieti un program care sa calculeze cel mai mare divizor comun (cmmdc) a 2 numere.
*/


#include <stdio.h>

int main()
{
    int a = 27, b = 4, r; // 27, 21
    int interatiaNr = 1;

    printf("Initial a este	%d \n",a);
    printf("Initial b este	%d \n",b);

    while (a%b != 0)
    {
        printf(" iteratia cu nr %d: , r = %d, a = %d, b = %d \n",interatiaNr, r, a, b);

        r = a%b;
        a = b;
        b = r;

        interatiaNr++;
    }

    printf("cmmdc este	%d \n",b);
    printf("Dupa bucla while a este	%d \n",a);
    printf("Dupa bucla while b este	%d \n",b);

    return 0;
}

