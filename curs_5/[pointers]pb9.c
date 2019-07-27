#include <stdio.h>

int main()
{
    int a = 25;
    int *p1, *p2, *p3;  // declaratia a 2 pointeri la un intreg

    p1 = &a;
    p2 = &a;
    p3 = &a;


    printf(" Valoarea lui a = %d (prin variabila). \n", a);
    printf(" Valoarea lui a (p1) = %d (prin pointer). \n", *p1);
    printf(" Valoarea lui a (p2) = %d (prin pointer). \n", *p2);
    printf(" Adreasa lui a = %p ; %p (p1) ; %p (p2). \n", &a, p1, p2);
    printf(" \n----------------- \n");

    *p1++; // se obtine mai intai valoarea pe care o pointeaza p1
    //si apoi p1 este incrementat pentru a pointa catre elementul urmator
    printf(" Valoarea lui a = %d (prin variabila). \n", a);
    printf(" Valoarea lui a (p1) = %d (prin pointer). \n", *p1);
    printf(" Valoarea lui a (p2) = %d (prin pointer). \n", *p2);
    printf(" Adreasa catre care pointeaza p1 = %p. \n", p1);
    printf(" Adreasa catre care pointeaza p2 = %p. \n", p2);


    printf(" \n----------------- \n");
    (*p2)++; // incrementeaza valoarea de la adresa memorata de p2
    printf(" Valoarea lui a = %d (prin variabila). \n", a);
    printf(" Valoarea lui a (p2) = %d (prin pointer). \n", *p2);
    printf(" Adreasa catre care pointeaza p2 = %p. \n", p2);

    printf(" \n----------------- \n");
    printf(" Adreasa catre care pointeaza p3 = %p. \n", p3);

    ++*p3; // incrementeaza valoarea de la adresa memorata de p3
    printf(" Valoarea lui a = %d (prin variabila). \n", a);
    printf(" Valoarea lui a (p3) = %d (prin pointer). \n", *p3);
    printf(" Valoarea lui a (p2) = %d (prin pointer). \n", *p2);
    printf(" Adreasa catre care pointeaza p3 = %p. \n", p3);
    printf(" Adreasa catre care pointeaza p2 = %p. \n", p2);

    return 0;
}
