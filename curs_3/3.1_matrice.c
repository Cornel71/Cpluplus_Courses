#include <stdio.h>

#define NL 10
#define NC 10


int main()
{
    int i, j;
    int a[2][3] = {1,2,3,4,5,6}; // echivalent cu:
    //int a[2][3] = {{1,2,3},{4,5,6}}; // echivalent cu:
    //int a[2][3] = {1,2,3,4,5,6,7}; // mai multe elem

    //int m[NL][NC];  // definitie echivalenta cu cea de mai sus:
    //int b[NL][NC];  // definitie echivalenta cu cea de mai sus:

    //a[2][0]= 8;
    //afisare matrice pe linii
    printf("\nMatricea a: \n");
    for (i=0; i<2; i++)     // !!i<3
    {
        for (j=0; j<3; j++)
        {
            printf ("%d ",a[i][j]);
        }

        printf ("\n");
    }

    float b[3][2]= {{2},{5.9,1},{-9}};
    //elementele pe linii sunt: 2 0 / 5.9 1 / -9 0
    printf("\nMatricea b: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
            printf ("%.1f   ",b[i][j]);
        printf ("\n");
    }

    float c[3][2]= {2,5.9,1,-9};
    //elementele pe linii sunt: 2 5.9 / 1 -9 / 0 0
    printf("\nMatricea c: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
            printf ("%.1f   ",c[i][j]);
        printf ("\n");
    }

    printf("\n dimensiunea  unui singur element din matricea a in bytes este %d\n", sizeof(a[0][0]));
    printf("\n dimensiunea  unui singure linii din matricea a in bytes este %d\n", sizeof(a[0]));
    printf(" dimensiunea  matricii a in bytes este %d \n", sizeof(a));

    return 0;
}

