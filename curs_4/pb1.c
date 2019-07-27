// Exemplul numarul 1 cu functii
// in din main se apeleaza doua functii simple, care nu primesc parametrii si nu returneaza nimic
#include <stdio.h>

void afisareText()
{
    printf("Introduceti un numar: ");
}

void citireSiAfisareNumar()
{
    int x;

    scanf("%d", &x);

    x = x + 3;

    printf("Numarul este %d", x);
    printf("\nAdresa variabilie x din functie este %d", &x);
}

int main()
{
    int x = 800;

    afisareText(); // apelam functia de afisare a textului
    citireSiAfisareNumar(); // apelam functia care face citirea si afisarea numarului

    printf("\nNumarul x din main este %d", x);
    printf("\nAdresa variabilei x din main este %d", &x);

    return 0;
}
