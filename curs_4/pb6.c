// Exemplul numarul 6 cu functii
// Implementare a unei functii care verifica daca un numar este palindrom
// Palindrom - numar care este identic in oglinda
// ex: 121, 19391..
#include <stdio.h>

// functie ce calculeaza inversul unui numar
//int inversNumar(int);

// functie ce returneaza 1 daca nr este palindrom si 0 daca nu e
int estePalindrom(int nr)
{
    int invers = inversNumar(nr);

    if(invers == nr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int inversNumar(int nr)
{
    int invers = 0;

    while (nr != 0) //  while (nr)
    {

        invers = invers*10 + nr%10;
        nr = nr/10;
    }

    return invers;
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
    int numar;

    numar = citireNumar(); // folosim functi pentru a citi numarul

    int ok = estePalindrom(numar);
    if (ok == 1)
        //if(estePalindrom(numar)) // if(estePalindrom(numar)==1)
    {
        printf("Numarul %d este palindrom.", numar);
    }
    else
    {
        printf("Numarul %d nu este palindrom.", numar);
    }

    return 0;
}
