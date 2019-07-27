#include <stdio.h>

int main()
{
    float a = 2.3, b;  // 2 variabile de tip float
    int *pi;  // declaratia unui pointer la un intreg
    float *pf;


    printf("initial a= %.2f \n", a);
    printf("initial b= %.2f \n", b);

    pi = &a; // gresit; pi indica catre un float desi este pointer de tip intreg
    // compilatorul nu da mesaj de eroare ci doar warning: assignment from incompatible pointer type
    b = *pi;
    // in final lui b nu i se atribuie valoarea lui a
    // pointerul pi fiind de tip intreg, vor fi transferati in b doar 4 octeti din cei 8 octeti

    printf("\n----------------- \n");
    printf("dupa varianta 1: a = %.2f \n", a);
    printf("dupa varianta 1: b = %.2f \n", b);

    pf = &a; // corect; pf indica catre un float si este pointer de tip float
    b = *pf;

    printf("\n----------------- \n");
    printf("dupa varianta 2: a = %.2f \n", a);
    printf("dupa varianta 2: b = %.2f \n", b);

    return 0;
}
