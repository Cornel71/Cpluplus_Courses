#include <stdio.h>

int main()
{
    int a = 2, b;  // 2 variabile int
    int *pi;  // declaratia unui pointer la un intreg
    float *pf; // declaratia unui pointer la un float


    printf("initial a= %d \n", a);
    printf("initial b= %d \n", b);

    pf = &a; // gresit; pi indica catre un float desi este pointer de tip intreg
    // compilatorul nu da mesaj de eroare ci doar warning: assignment from incompatible pointer type
    b = *pf;
    // in final lui b nu i se atribuie valoarea lui a
    // pointerul pi fiind de tip intreg, vor fi transferati in b doar 4 octeti din cei 8 octeti

    printf("\n----------------- \n");
    printf("dupa varianta 1: a= %d \n", a);
    printf("dupa varianta 1: b= %d \n", b);

    pi = &a; // corect; pf indica catre un float si este pointer de tip float
    b = *pi;

    printf("\n----------------- \n");
    printf("dupa varianta 2: a= %d \n", a);
    printf("dupa varianta 2: b= %d \n", b);

    return 0;
}
