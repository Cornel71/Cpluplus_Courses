// Exemplul numarul 5 cu functii
// Implementare a unei functii ce calculeaza numarul de cifire dintr-un numar
#include <stdio.h>

int numarCifre(int nr)
{
    int nrCifre = 0;

    while (nr != 0)
    {
        nr = nr/10;
        nrCifre++;
    }

    //printf("\nNr este %d", nr);

    return nrCifre;
}

// functie ce citeste de la tastatura un numar si il returneaza
int citireNumar()
{
    int x;

    printf("Introduceti un numar: ");
    scanf("%d", &x);

    return x;
}

int main()
{
    int numar, rez, a = 321, a1 = a;

    numar = citireNumar(); // folosim functii pentru a citi numarul

    rez = numarCifre(numar);
    //printf("Numarul de cifre din %d este %d", numar, numarCifre(numar));
    printf("\nNumarul de cifre din %d este %d", numar, rez);
    printf("\nNumarul este %d", numar);

//    int nrCif = 0;
//
//    while (a != 0)
//    {
//        a = a/10;
//        nrCif++;
//    }
//
//    printf("\nNumarul de cifre din %d este %d", a1, nrCif);
//    printf("\nNumarul este %d", a);


    return 0;
}
