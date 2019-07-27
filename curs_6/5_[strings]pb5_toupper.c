#include<stdio.h>


int main()
{
    char c = 'g';

    printf ("\nislower %d", islower(c));
    printf ("\nisupper %d", isupper(c));
    printf ("\nisdigit %d", isdigit(c));

    printf ("\n\n\ntolower %c", tolower(c));
    printf ("\ntoupper %c\n", toupper(c));

    printf ("\ns-a modificat %c? \n", c);


    char ch;
    ch = toupper(c);
    printf ("\n c:  %c", c);
    printf ("\n ch:  %c\n", ch);

    return 0;

}
