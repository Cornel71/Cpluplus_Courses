#include <stdio.h>
#include <limits.h>

int main()
{
    int flori;                // declararea unei variabile intregi
    int flori2 = 10;           // declararea unei variabile intregi + initializare
    int flori3;               // declararea unei variabile intregi

    printf("Initial, dupa declarare %d\n", flori);

    flori = 25;                  // atribuirea unei valori variabilei "flori"

    printf("%d\n", flori);

    printf("Ana are");
    printf (" %d", flori);
    printf (" flori.");       // afisare valoare variabila
    printf ("\n");

    flori = flori + 1;        // modificam variabila

    printf("Ana are acum %d flori\n", flori);

    printf("\tMaria are %d flori", flori - 7);

    printf("\nValoarea variabilei flori = %d (in memorie)", flori);

    int min = INT_MIN;
    int max = INT_MAX;

    printf("\nValoarea minima pt un int = %d\n", min);
    printf("Valoarea maxima pt un int = %d", max);

    return 0;
}
