/**
 * Scrieti un program care pentru citirea de la tastatura a informatiilor
 * despre 3 angajati a unei companii.
 * Un angajat este definit prin: varsta, vechime si nume
 *
 * Implementare cu structuri si pointeri
 */

#include <stdio.h>

// vom defini o structura
typedef struct {
    char nume[50];
    int varsta;
    int vechime;
} ANGAJAT;

// functia ia ca paremetru un pointer catre o structura si o umple cu date
void citireAngajat(ANGAJAT *pangajat)
{

    printf("Numele angajatului este: ");
    scanf("%s", pangajat->nume);
    //scanf("%s", (*pangajat).nume);
    printf("Varsta angajatului este: ");
    scanf("%d", &(*pangajat).varsta);
    //scanf("%d", &pangajat->varsta);
    printf("Vechimea angajatului este: ");
    scanf("%d", &pangajat->vechime);
}

void afisareAngajat(ANGAJAT angajat)
{
    printf("Numele angajatului este: %s\n", angajat.nume);
    printf("Varsta angajatului este: %d\n", angajat.varsta);
    printf("Vechimea angajatului este: %d\n", angajat.vechime);
}

int main()
{
    // declaram cei trei angajati
    ANGAJAT angajat1, angajat2, angajat3;

    // citim angajatii cu ajutorul unei functii
    printf("adresa angajat 1 = %p ", &angajat1);
    citireAngajat(&angajat1);
    printf("adresa angajat 2 = %p ", &angajat2);
    citireAngajat(&angajat2);
    printf("adresa angajat 3 = %p ", &angajat3);
    citireAngajat(&angajat3);

    // afisam angajatii
    printf("\nCei 3 angajati: \n");
    afisareAngajat(angajat1);
    afisareAngajat(angajat2);
    afisareAngajat(angajat3);

    return 0;
}
