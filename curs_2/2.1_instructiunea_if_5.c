/**
 Cititi de la tastatura 3 numere intregi pozitive.
 Verificati daca acestea reprezinta valorile 1,2,3 (nu conteaza ordinea).
 Afisati un mesaj corespunzator.

 Hint: 1+2+3 = 1*2*3
*/

#include <stdio.h>

int main()
{
  int x;
    printf("Introduceti 3 numere intregi: ");
    scanf ("%d %d %d", &x, &x, &x);
  if ((x == 1) || (x == 2) || (x == 3))
    printf("Numerele introduse 1 2 3");
  else
    printf("Numerele introduse diferite de 1 2 3");
  return 0;
}
