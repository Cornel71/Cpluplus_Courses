#include<stdio.h>
/*
    int fprintf ( FILE * stream, const char * format, ... );

*/


int main()
{
    FILE *pf;
    char numeFisier[25], expresie[100];
    int i, j, n;

    printf("Introduceti numele fisierului: ");
    scanf("%s",numeFisier);
    // la introducere numelui NU trebuie specificata si extensia;

    pf = fopen(numeFisier,"wt");

    if (pf == NULL)
    {
        perror("Eroare");
        exit(1);
    }
    else
    {
        puts("Fisier deschis in modul scriere");

        int pere = 6;
        float media = 9.8;

        printf ("Ana are %d mere si %d pere\n",10,pere);
        fprintf (pf, "Ana are %d mere si %d pere \n",10,pere);
        fprintf (pf, "Valentin are media %f la matematica  \n",media);

//================================================

//        puts("Cate expresii doriti sa introduceti in fisier?");
//        scanf("%d", &n);
//
//        float x = 4.598;
//
//        for (i = 0; i < n; i++){
//            printf ("Introduceti expresia %d: ", i+1);
//            fflush(stdin);
//            gets (expresie);
//            fprintf (pf, "Expresie %d: %s %f\n",i+1,expresie,x);
//        }

//================================================

//        float a[2][3] = {1,2,3,4,5,6};
//
//        fputs("Matricea a: \n", pf);
//
//        for (i=0; i<2; i++)
//        {
//            for (j=0; j<3; j++)
//            {
//                fprintf (pf,"%.2f   ",a[i][j]);
//            }
//            fputc('\n', pf);
//        }

   }

    if(fclose(pf)!=0)

        puts("Eroare la inchiderea fisierului\n");

    return 0;
}
