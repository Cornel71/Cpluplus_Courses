#include<stdio.h>
#include<string.h>

// vom folosi o structura
// structura incapsuleaza toate proprietatile angajatului.
struct angajat {
    char nume[50];
    int varsta;
    int vechime;
};

int main()
{
    // initializare structura direct, declarand direct membrii ei
    struct angajat angj1 = {"Vlad", 43, 10};

    printf("Angajatul %s are varsta %d si vechimea %d\n",
           angj1.nume, angj1.varsta, angj1.vechime);

    // initializare structura prin accesarea fiecarui camp in parte
    struct angajat angj2;

    angj2.vechime = 19;
    angj2.varsta = 51;
    // ne reaminim cum se initializeaza sirurile de caractere dupa declararea acestora
    strcpy(angj2.nume, "Maria");
    printf("Angajatul %s are varsta %d si vechimea %d\n",
           angj2.nume, angj2.varsta, angj2.vechime);

    // initializare structura prin citirea de la tastatura
    struct angajat angj3;

    printf("Numele angajatului este: ");
    scanf("%s", angj3.nume);
    printf("Varsta angajatului este: ");
    scanf("%d", &angj3.varsta);
    printf("Vechimea angajatului este: ");
    scanf("%d", &angj3.vechime);

    printf("Angajatul %s are varsta %d si vechimea %d",
           angj3.nume, angj3.varsta, angj3.vechime);

    return 0;

}
