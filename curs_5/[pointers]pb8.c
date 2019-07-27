#include <stdio.h>

int main()
{
    int a = 25, b = 34;
    int *p1, *p2;  // declaratia a 2 pointeri la un intreg

    p1 = &a;
    p2 = &b;

    printf(" Valoarea lui a = %d (prin variabila). \n", a);
    printf(" Valoarea lui a = %d (prin pointer). \n", *p1);
    printf(" Adreasa lui a = %p. \n", p1);
    printf(" Adreasa lui b = %p. \n", p2);
    printf(" \n----------------- \n");

    p1++;
    p2--;

    printf(" Adresa urmatoare dupa a = %p. \n", p1);
    printf(" Adresa dinainte de b = %p. \n", p2);
    printf(" Valoarea lui a = %d (prin variabila). \n", a); // CORECT
    printf(" Valoarea lui a = %d (prin pointer). \n", *p1); // GRESIT. Pointerul s-a mutat la adresa imediat urmatoare dupa a.
    printf(" \n----------------- \n");

    p1 = p1 + 5; // p1 indica al 5-lea element de acelasi tip
    p2 = p2 - 6; // p2 indica intregul aflat in memorie cu 6 intregi inaintea sa

    printf(" Noua adresa catre care pointeaza p1 = %p. \n", p1);
    printf(" Noua adresa catre care pointeaza p2 = %p. \n", p2);

    return 0;
}
