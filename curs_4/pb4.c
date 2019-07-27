// Exemplul numarul 4 cu functii
// Implementare a unei functii calculeaza factorialul unui numar
// factorialul este dat de formula:
// factorial(n) = 1*2*3*...*n

#include <stdio.h>

int factorial(int n)
{
    int i, p;

    p = 1; // initialziare cu 1 (avem de-a face cu un produs)

    for (i = 1; i <= n; i++)
    {
        p = p * i;
        // p *= i; // alternativa de scriere
    }

    return p;
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
    int a, f;

    a = citireNumar(); // folosim functia pentru a citi numarul

    f = factorial(a);

    printf("Factorial de %d este %d", a, f);

    return 0;
}
