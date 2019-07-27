#include <stdio.h>

int main()
{
    int a = 55;
    int *p;  // declaratia unui pointer la un intreg

    printf("initial: a = %d \n", a);

    p = &a;
    *p = 135;

    printf("dupa: a = %d \n", a);

    return 0;
}
