#include <stdio.h>

int main()
{
    int *p;  // declaratia unui pointer la un intreg


    printf(" Valoarea lui p = %p. \n", p);
    //printf(" Valoarea lui p = %d. \n", p);

    *p = 135; // incorect - p nu pointeaza catre nici o variabila

    return 0;
}
