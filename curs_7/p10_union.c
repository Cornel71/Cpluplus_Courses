#include <stdio.h>
#include <string.h>

union exemplu {
   int i;
   float f;
   char str[20];
};

struct exemplificare {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union exemplu un;
   struct exemplificare st;

   printf( "Memoria ocupata de catre union este : %d\n", sizeof(un));
   printf( "Memoria ocupata de catre struct este : %d\n", sizeof(st));

   return 0;
}
