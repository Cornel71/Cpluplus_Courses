/*
* Cititi de la tastatura un 2 siruri de caractere. Concatenati-le si afisati rezultatul. Scrieti o varianta de program
* fara a utiliza functia de biblioteca specializata si o varianta cu folosirea acesteia.
* Autor: Iulia Iacob
*/


#include<stdio.h>
#include<string.h>

// functie echivalenta cu strcat

void concatenate(char original[], char adaugat[]) {
   int c, d;

   c = 0;

   while (original[c] != '\0') //  while (original[c])
   {
      c++;
   }

   //original[c]=' ';
   //c=c+1;

   d = 0;

   while (adaugat[d] != '\0') {
      original[c] = adaugat[d];
      d++;
      c++;
   }

   original[c] = '\0';
}

/*
// functia de concatenare folosind pointeri
void concatenate_p(char *original, char *adaugat)
{
   while(*original)
      original++;

   while(*adaugat)
   {
      *original = *adaugat;
      adaugat++;
      original++;
   }

   *original = '\0';
}
*/

int main()
{
   char original[100], adaugat[100];

   printf("Introduceti primul sir\n");
   gets(original);

   printf("Introduceti al doilea sir\n");
   gets(adaugat);

   concatenate(original, adaugat);

   printf("Sirul dupa concatenare \"%s\"\n", original);


    char t = '\0';
    printf("t: %d\n", t); // 000

   return 0;
}

