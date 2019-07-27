#include <stdio.h>
//#include <string.h>

/* char * strncpy ( char * destination, const char * source, size_t num ); */

int main ()
{
    char sir1[]= "To be or not to be";
    char sir2[40];
    char sir3[40];


    puts (sir2);

    /* se copiaza in sirul 2 sirul 1: */
    strncpy ( sir2, sir1, 7) ;
    sir2[7] = '\0';

    puts (sir2);

    /* copiaza doar 5 caractere): */
    strncpy ( sir3, sir2, 5 );
    sir3[5] = '\0';   /* se adauga terminatorul de sir de caractere \0 */

    puts (sir1);
    puts (sir2);
    puts (sir3);

    return 0;
}
