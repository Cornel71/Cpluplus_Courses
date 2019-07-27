#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
/*
	In acest exemplu alocam spatiu pentru un vector in fuctie de o valoare citita de la tastatura

    Apoi, pentru a ilustra relatia dintre pointeri si vectori, vom folsi sistemul de adresare deja cunoscut
    (v[i] pentru a indica elementul i din vector) pentru a parcurge vectorul reprezentat prin pointerul p

*/
int main()
{
    int n,i;
    int *p;  // declaratia unui pointer la un int

    //float p[10];
    printf("Numarul de elemente este: ");
    scanf("%d", &n);

    p = (int *) malloc(sizeof(int) * n);  // folsind functia malloc alocam spatiu pentru n valori intregi

    // desi p este un pointer noi putem sa il folosim ca un vector, adica p[i] se va referi la elementul i din p
    for(i=0; i<n; i++)
    {
        printf("p[%d]=",i);
        scanf("%d",&p[i]);
    }


    for(i=0; i<n; i++)
    {
        printf("p[%d] = %d \n",i, p[i]);
    }

    free(p);  // eliberam spatiul alocat

    return 0;
}
