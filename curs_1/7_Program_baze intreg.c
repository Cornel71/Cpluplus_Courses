// Baze de numeratie

#include <stdio.h>

int main()
{
    int x;

    printf("Introduceti valoarea numarului x: ");        // afisare mesaj
    scanf ("%d", &x);                                   // citire valoare de la tastatura

    printf("Valoarea introdusa de la tastaura %d", x);  // afisare valoare

    // Afiseaza dublul numarului in baza 10.
    printf("\nDublul numarului %d in baza 10 este: %d", x, 2*x);

    // Afiseaza dublul numarului in baza 8.
    printf("\nDublul numarului %d in baza 8 este: %o", x, 2*x);

    // Afiseaza dublul numarului in baza 16.
    printf("\nDublul numarului %d in baza 16 este: %x", x, 2*x);

    return 0;
}

