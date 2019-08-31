#include<stdio.h>

int main()
{
    FILE *pf;
    char numeFisier[25], sir[20];

    int nr;
    float a = 4.9;
    int x, y;

    printf("Introduceti numele fisierului: ");
    scanf("%s",numeFisier);
    // la introducere numelui NU este obligatorie specificarea extensiei;
    //strcat(numeFisier, ".txt"); // pentru a adauga extensia .txt

    pf = fopen(numeFisier,"wt"); // sau  f=fopen(numeFisier,"wt+");

    if (pf==NULL)
    {
        perror("Eroare");
        exit(1);
    }
    else
    {
        puts("Fisier deschis in modul scriere + citire");
        //fprintf (pf, "%d %s", 2014, "Anul");
       x = fprintf (pf, "%d %s", 2014, "Anul");
//
//        rewind(pf);
        //y = fscanf (pf, "%d %s",  &nr, sir);
       // y = fscanf (pf, "%s %d",  sir, &nr);
        //y = fscanf (pf, "%[^\n]%*c %d",  sir, &nr);
        printf ("\nDatele citite din fisier sunt: \n nr intreg =  %d // sirul = %s", nr,  sir);
    }

    if(fclose(pf)!=0)
        puts("Eroare la inchiderea fisierului\n");

    //printf ("\nx= %d //// y = %d", x, y);
      printf ("\nx = %d", x);

    return 0;
}
