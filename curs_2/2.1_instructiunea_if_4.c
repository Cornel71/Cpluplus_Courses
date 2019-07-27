/**
 Cititi de la tastatura un numar intreg.
 Verificati daca numarul respectiv este par sau impar.
 Afisati un mesaj corespunzator
*/

#include <stdio.h>

int main()
{
int a;

   printf("Introduceti valoarea lui a: ");
    scanf ("%d", &a);

    if (a % 2 == 0)
        printf("Valoarea introdusa este un numar par");
    else
      printf("Valoarea introdusa este un numar impar");
    return 0;
}

