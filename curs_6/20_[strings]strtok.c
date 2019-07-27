#include<stdio.h>
#include<string.h>

/*

char * strtok ( char * str, const char * delimiters );

*/


int main ()
{
    char sir [] ="Acesta este un, sir de test.", delimitator[]=" ,.-!?";
    char *pch;
    int k=0;

    printf ("Impartim sirul \"%s\" in tokeni:\n",sir);
    /* se ia primul token */
    pch = strtok (sir, delimitator); // pch = strtok (sir, " ,.-");

//    printf("pointer pch %p \n", pch);
//    printf("string pch %s \n", pch);
//    printf("sirul original %s \n", sir);

    while (pch != NULL)
    {
        printf ("%s\n",pch);
        k++;
        pch = strtok (NULL, delimitator); // pch = strtok (NULL, " ,.-");
    }

    return 0;
}

/*
   /* se parcurg token-ii
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        k++;
        pch = strtok (NULL, delimitator); // pch = strtok (NULL, " ,.-");
    }


*/
