#include <stdio.h>

int main()
{
    int a = 1234;
    int *p1, *p2;  // declaratia a 2 pointeri la un intreg


    p1 = &a;
    p2 = p1;

    printf(" Valoarea lui a = %d. \n", a);
    printf(" Valoarea lui a = %d. \n", *p1);
    printf(" Valoarea lui a = %d. \n", *p2);

    // O adresa poate fi tiparita (in hexazecimal) cu specificatorul de format %p

    printf(" Adreasa lui a (p1) = %p. \n", p1);
    printf(" Adreasa lui a (p1) = %d. \n", p1);
    printf(" Adreasa lui a (p2) = %p. \n", p2);
    printf(" Adreasa lui a (p2) = %d. \n", p2);
    printf(" Adreasa lui a      = %p. \n", &a);
    printf(" Adreasa lui a      = %d. \n", &a);

    return 0;
}
