/*
  Folositi instructiunea switch pentru a realiza un calculator simplu (+, -, /, *).

*/


#include <stdio.h>


int main ()
{
    int a, b, rez;
    char operatie;

    char op = '*';
    printf ("%c", op);

    printf ("Introduceti operatia: ");
    scanf ("%d%c%d", &a,&operatie,&b);

    printf ("a = %d\n", a);
    printf ("b = %d\n", b);
    printf ("operatie = %c - %d\n", operatie, operatie);


    switch (operatie)
    {
    case '+':
        rez = a + b; printf("rez = %d\n", rez);
        printf("%d + %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
    case '*':
    case 'x':
        printf("%d * %d = %d\n", a, b, a*b);
        break;
    case '/':
    case ':':
        printf("%d / %d = %d\n", a, b, a/b);
        break;
    default:
        printf("Operatie incorecta");
    }


    return 0;

}

