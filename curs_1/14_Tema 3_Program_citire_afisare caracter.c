// citere + afisarea unui caracter

#include <stdio.h>

int main( )
{
    char ch;        // declarea unei variabile de tip caracter

    printf("Introduceti un caracter: ");        // afisare mesaj
    scanf ("%c", &ch);                          // citire valoare de la tastatura


    printf("\nAti introdus caracterul: %c!", ch);

    // Afisati caracterul ca pe un intreg
    printf("\nCodul ASCII al caracterului %c este %d!", ch, ch);

    // Afisare urmatorul caracter in ordine lexicografica
    printf("\nUrmatorul caracter dupa %c este %c!", ch, ch+1);


    // Afisati literele abcde folosind o singura variabila si o singura linie de cod



    // Afisati a 16-a litera mica din alfabet


    return 0;
}
