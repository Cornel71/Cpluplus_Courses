#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
/*
	Am vazut in exemplul anterior cat de asemanatori sunt pointerii cu vectorii.

	Asta se intampla pentru ca vectorii sunt defapt tot pointeri.

	Cand declaram
	int v[100]; -> ni se aloca spatiu pentru 100 de elemente de tip int, unde v reprezinta un pointer catre primul element

	Asadar, sintaxa v[i] (valoarea elementului i din v) este echivalennta cu *(v+i) (valoarea de la adresa (v+i))

*/
int main()
{
    int n,i;
    float *p;  // declaratia unui pointer la un float

    printf("Numarul de elemente este: ");
    scanf("%d", &n);

    p = (float *) malloc(sizeof(float) * n);  // folsind functia malloc alocam spatiu pentru n float-uri

    // desi p este un pointer noi putem sa il folosim ca un vector, adica p[i] se va referi la elementul i din p
    for(i=0; i<n; i++)
    {
        printf("p[%d]=",i);
        scanf("%f", p+i);// nu avem nevoie de adresa la scanf, pentru ca p+i reprezinta o adresa
    }

    // afisam primul element
    printf("Primul element este: %f ", *(p)); // echivalentul lui p[0]

    // afisam al treilea element
    printf("Al treilea element este: %f ", *(p+2)); // echivalentul lui p[2]

    // afisam ultimul element
    printf("Ultimul element este: %f ", *(p+n-1)); // echivalentul lui p[n-1]

    free(p);  // eliberam spatiul alocat

    return 0;
}
