#include <stdio.h>

int main()
{
     int var = 100;   // (1) variabila de tip intreg cu valoarea 100
     int *p;         // (2) variabila de tip pointer la intreg

    printf("\n--------(1 + 2)-------- \n");
    printf(" Valoarea lui var = %d. \n", var);

     p = &var;       // (3)in p se memoreaza adresa de inceput a zonei
                     // de memorie alocata variabilei var

    printf("\n--------(3)-------- \n");
    printf(" Valoarea lui var = %d. \n", var);
    printf(" Valoarea lui var prin pointer = %d. \n", *p);

     int nr = *p; // (4) daca p este adresa lui var, nr devine egal cu
                  // cu valoarea retinuta la adresa retinuta in p,
                  // echivalent nr = var

    printf("\n--------(4)-------- \n");
    printf(" Valoarea lui var = %d. \n", var);
    printf(" Valoarea lui nr = %d. \n", nr);

     *p = - 9;    //  (5) atribuie o valoare ce va fi stocata la adresa
                  //  indicata de pointer, NU in variabila pointer!
                  //  echivalent var = -9

    printf("\n--------(5)-------- \n");
    printf(" Valoarea lui var = %d. \n", var);
    printf(" Valoarea lui var prin pointer = %d. \n", *p);
    printf(" Valoarea lui nr = %d. \n", nr);

    return 0;
}
