// Exemplul numarul 3 cu functii
// Implementare a unei functii ce face suma a doua numere
// Acesta functie este apelata din main in mai multe moduri
#include <stdio.h>

int var = 0;

void suma1(int a, int b)
{
    int s = a + b;

    printf("\nSuma in functie este: %d\n", s);
}

int suma(int a, int b)
{
    //int s = a + b;
    //return s;
    return a + b;  // alternativa de scrire (fara variabila auxiliara s)
}

int main()
{
    int s;

    s = suma(3, 8);

    suma1(12, 8);
    //int k = suma1(3,4); // gresit

    printf("Suma 1: %d\n", s);
    printf("Suma 2: %d\n", suma(3, 8));
    printf("Suma 3: %d\n", suma(3,4)/suma(2,1));

    int x, y;
    printf("Numerele x, y sunt: ");
    scanf("%d %d", &x, &y);

    printf("Suma 4: %d", suma(x, y));

    return 0;
}
