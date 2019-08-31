#include <stdio.h>

int main ()
{
    FILE *pf;
    char ch;

    pf = fopen ("litere.txt","wt");

    if (pf == NULL)
    {
        perror("Eroare"); // Afiseaza o eroare ce descrie problema aparuta
        exit(1);
    }
    else
    {
        puts("Fisier deschis in modul scriere");

        //fputc ('A',pf);
        //fputc ('\n',pf);

        for (ch ='A'; ch <='Z'; ch++)
        {
            fputc (ch,pf);
            //fputc ('\n',pf);
        }

        fclose (pf);
    }

    return 0;

}
