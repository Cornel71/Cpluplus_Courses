#include<stdio.h>
#include<string.h>

/*

char *strrev(char *string);

strrev( )  - Inverseaza continutului unui sir de caractere, exceptand '\0'
           - Nu este o functie standard
*/


int main()
{
   char sir[30] = "CrystalMindAcademy";

   printf("sirul nostru este : %s\n",sir);

   printf("Sirul cu strrev  : %s\n",strrev(sir));

   printf("Sirul dupa strrev : %s\n",sir);

   strrev(sir);

   printf("Sirul dupa strrev de 2 ori : %s\n",sir);

   return 0;
}
