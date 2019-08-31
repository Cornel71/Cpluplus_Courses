#include <stdio.h>

int main ()
{
    FILE *pf;
    char ch;
    int n=0, i=0;

    pf = fopen ("litere.txt","rt");

    if (pf == NULL)
    {
        perror("Eroare"); // Afiseaza o eroare ce descrie problema aparuta
        exit(1);
    }
    else
    {
        //ch = fgetc (pf);
        //printf ("%c = %d\n", ch, ch);

        printf ("EOF = %d\n", EOF);


        while (ch!= EOF)
        {
            ch = fgetc (pf); i++;
            printf ("%c = %d - %d\n", ch, ch, i);

            //if (ch == 'A')
            //   n++;
        }

        fclose (pf);

        //printf ("Fisierul contine litera 'A' de %d ori \n",n);
    }

    return 0;
}
