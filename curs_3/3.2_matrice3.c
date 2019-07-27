# include <stdio.h>

int main()
{
    int nlA, ncA, nlB, ncB, A[100][100],i, j, k;
    float  B[100][100], C[100][100]={0}; // toate valorile initializate la 0

    //citire numar de linii, numar de coloane pentru matricea A
    printf("nr.linii: ");
    scanf("%d",&nlA);
    printf("nr.coloane: ");
    scanf("%d",&ncA);

    //citire numar de linii, numar de coloane pentru matricea B
    printf("nr.linii: ");
    scanf("%d",&nlB);
    printf("nr.coloane: ");
    scanf("%d",&ncB);

    if (nlA != nlB || ncA != ncB)
    {
        printf("Nu se poate efectua A + B. Numarul de linii / numarul de coloane nu coincide"); // afisam mesaj
        return 0; // iesim din program
    }

     //citire matrice A pe linii
    for (i=0; i<nlA; i++)
        for (j=0; j<ncA; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf ("%d", &A[i][j]);
        }


     //citire matrice A pe linii
    for (i=0; i<nlB; i++)
        for (j=0; j<ncB; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf ("%f", &B[i][j]);
        }

    // calculam matricea suma
    for (i = 0; i < nlA; i++)
        for (j = 0; j < ncA; j++)
        {
             C[i][j] = A[i][j] + B[i][j];
        }

   // afisam matricea suma
   for (i = 0; i < nlA; i++)
    {
        for (j = 0; j < ncA; j++)
            printf("%.2f ", C[i][j]);

        printf("\n");
    }

    return 0;
}
