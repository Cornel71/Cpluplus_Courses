/*

void* calloc (size_t num, size_t size);

Ex:    int * a= (int*) calloc (n, sizeof(int) );
 //aloca memorie ptr. n întregi si initializeaza cu zerouri


*/

#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* calloc, exit, free */

int main ()
{
    int i,n;
    int * p;

    printf("Numarul de elemente este: ");
    scanf("%d", &n);


    p = (int*) calloc (n,sizeof(int));
    if (p==NULL) exit (1);

    printf ("Elementele vectorului dupa alocarea memoriei: \n");
    for(i=0; i<n; i++)
    {
        printf("p[%d] = %d \n",i, p[i]);
    }

    printf ("\n=============================\n");
    for(i=0; i<n; i++)
    {
        printf("p[%d]=",i);
        //scanf("%d",&p[i]);
        scanf("%d", p+i);
    }

    printf ("\n=============================\n");
    printf ("Elementele vectorului citite: \n");
    for(i=0; i<n; i++)
    {
        //printf("p[%d] = %d \n",i, p[i]);
        printf("p[%d] = %d \n",i, *(p+i));
    }

    free (p);

    return 0;
}
