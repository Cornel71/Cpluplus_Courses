#include <stdio.h>

int main ()
{
    FILE *pf;
    char c;

    //pf = fopen ("demo.txt","wt"); //=> atentie la folosirea functiei fseek()
    pf = fopen ("demo.txt","r+t"); //=> atentie la folosirea functiei fseek()
    // daca deschidem fisierul in modul "a" sau "a+" scrierea se face la sfarsit;
    //pf = fopen ("demo.txt","at"); //=> atentie la folosirea functiei fseek();

    if (pf==NULL)
    {
        perror("Eroare");
        exit(1);
    }
    else
    {
        //puts("Fisier deschis in modul adaugare informatii");
        puts("Fisier deschis in modul scriere");
        //fputs("Mesaj pentru a testa pozitionarea in fisiere text", pf);
        //fputs("Alt Mesaj", pf);

       fseek(pf,15,SEEK_SET);
       fputs("vedea", pf);

       fseek(pf,0,SEEK_END);
       int df = ftell(pf)/sizeof(char);

       printf("Fisierul 'demo.txt' are %d caractere\n", df);

    }

    fclose (pf);

    return 0;
}
