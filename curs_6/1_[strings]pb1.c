#include<stdio.h>

int main()
{

    char sir1[] = {'S', 'a', 'l', 'u', 't', '\0'};
    char sir2[] = "Hello";
    char *sir3 = "Hello World";
    char sir4[10];

    printf ("Sirul 1: %s \n", sir1);
    printf ("Sirul 2: %s \n", sir2);
    printf ("Sirul 3: %s \n", sir3);
    printf ("Sirul 4: %s \n", sir4);

    printf ("\n------------- \n");
    printf ("Al doilea caracter din sirul 1: %c \n", sir1[1]);
    printf ("Al doilea caracter din sirul 3: %c \n", *(sir3+1));

    printf ("\n------------- \n");
    printf ("Al treilea caracter din sirul 1: %c \n", *(sir1+2));
    printf ("Al treilea caracter din sirul 3: %c \n", sir3[2]);

    printf ("%d   /  %d ", sizeof(sir2), sizeof(sir3));
    printf ("\n%d  ", sizeof(sir4));

    return 0;

}
