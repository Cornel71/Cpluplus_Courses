/*
Scrieti un program care calculeaza suma cifrelor unui numar

Ex. pentru 1234 => suma = 1+2+3+4

*/


#include <stdio.h>

int main()
{
   int n, t, suma = 0, rest;

   printf("Introduceti un numar\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      rest = t % 10;
      suma = suma + rest;
      t    = t / 10;
   }

   printf("Suma numerelor %d = %d\n", n, suma);

   return 0;
}

