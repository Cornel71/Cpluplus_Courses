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
    float *p;  // declaratia unui pointer la un float

    //float p[10];
    printf("Numarul de elemente este: ");
    scanf("%d", &n);

    p = (float *) malloc(sizeof(float) * n);  // folsind functia malloc alocam spatiu pentru n float-uri

    // desi p este un pointer noi putem sa il folosim ca un vector, adica p[i] se va referi la elementul i din p
    for(i=0; i<n; i++)
    {
        printf("p[%d]=",i);
        scanf("%f",&p[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("p[%d] = %f \n",i, p[i]);
    }

    free(p);  // eliberam spatiul alocat

    return 0;
}
