#include <stdio.h>
//#include <stdlib.h>

int main ()
{
    FILE *pf;
    char s[100];
    int x = -6;

    pf = fopen ("demo.txt","at");

    if (pf==NULL)
    {
        perror("Eroare "); // Afiseaza o eroare ce descrie problema aparuta
        exit(1);
    }
    else
    {
        puts("Fisier deschis in modul scriere.");
        puts("Introduceti o fraza de la tastatura. Fraza va fi scrisa in fisier.");

        gets (s);
        fputs(s, pf);

//        fputc('\n', pf);
//        x = fputs(s, pf);
//        printf("x = %d", x);
    }

    fclose (pf);

    return 0;
}
