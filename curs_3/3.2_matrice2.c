#include <stdio.h>

#define NL 10
#define NC 10

int main()
{
    int nl, nc, i, j;
    int a[3][5]; /* defineste un tablou dimensional de elemente intregi,
                    cu maxim 3 linii si 5 coloane*/


    //int m[NL][NC];  // definitie echivalenta cu cea de mai sus:
    //int b[NL][NC];  // definitie echivalenta cu cea de mai sus:


    //citire numar de linii, numar de coloane
    printf("nr.linii: ");
    scanf("%d",&nl);

    printf("nr.coloane: ");
    scanf("%d",&nc);

    //citire matrice pe linii
    for (i=0; i<nl; i++)
        for (j=0; j<nc; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf ("%d", &a[i][j]);
        }

    //afisare matrice pe linii
    printf("\nMatricea a: \n");
    for (i=0; i<nl; i++)
    {
       for (j=0; j<nc; j++)
            printf ("%d ",a[i][j]);

       printf ("\n");
    }

    printf("\n dimensiunea  unui singur element din matricea a in bytes este %d\n", sizeof(a[0][0]));
    printf("\n dimensiunea  unui singure linii din matricea a in bytes este %d\n", sizeof(a[0]));
    printf(" dimensiunea  matricii a in bytes este %d \n", sizeof(a));
    return 0;
}

