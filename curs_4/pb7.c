// Exemplul numarul 7 cu functii
// Implementare a unei functii care calculeaza cel mai mic multiplu comun
// ex: pentru 15, 9 acesta este 45
#include <stdio.h>

// functie ce cel mai mare divizor comun al doua numere
int cmmdc(int a, int b)
{
    int r;

    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }

    return b;
}
// functie ce cel mai mic multiplu comun al doua numere
int cmmmc(int x, int y)
{
    return x*y/cmmdc(x, y);
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
    int a, b;
    a = citireNumar();
    b = citireNumar();

    printf("Cel mai mic multiplu comun este: %d", cmmmc(a, b));
    printf("\nCel mai mic multiplu comun este: %d", cmmmc(a, citireNumar()));

    return 0;
}
