#include<stdio.h>
#include<string.h>

/* int strcmp ( const char * str1, const char * str2 ); */
/* int strncmp ( const char * str1, const char * str2, size_t num ); */

int main()
{
    char sir1[]="Ana are mere!";
    char sir2[]="Ana are mere!";
    char sir3[]="ana are mere!";
    char sir4[]="ana";

    printf ("\n\n ----------------- \n");

    if (sir1 == sir2) printf("Sirurile sunt identice"); // varianta gresita
    else printf("Sirurile nu sunt identice");

    printf ("\n\n ----------------- \n");

    printf ("\n siruri identice = %d", strcmp("ana","ana"));
    printf ("\n siruri v1 = %d", strcmp("ANA","ana"));
    printf ("\n siruri v2 = %d", strcmp("ana","ANA"));

    printf ("\n\n ----------------- \n");
    printf ("\nsirul 1: %s", sir1);
    printf ("\nsirul 2: %s", sir2);
    if (strcmp(sir1, sir2)==0) printf("\nSirurile sunt identice");
    else printf("\nSirurile nu sunt identice");


    printf ("\n\n ----------------- \n");
    printf ("\nsirul 1: %s", sir1);
    printf ("\nsirul 3: %s", sir3);
    if (stricmp(sir1, sir3)==0) printf("\nSirurile sunt identice. Nu se tine cont de diferenta litera mare/mica");
    else printf("\nSirurile nu sunt identice");

    int n=strlen (sir4);
    printf ("\n\n ----------------- \n");
    printf ("\nsirul 3: %s", sir3);
    printf ("\nsirul 4: %s", sir4);
    if (strncmp(sir3, sir4, n)==0) printf("\nPrimele 3 caractere din sir sunt identice.");
    else printf("\nSirurile nu sunt identice");

    printf ("\n\n ----------------- \n");
    printf ("\nsirul 2: %s", sir2);
    printf ("\nsirul 4: %s", sir4);
    if (strnicmp(sir2, sir4, strlen (sir4))==0) printf("\nSirurile sunt identice.");
    else printf("\nSirurile nu sunt identice");

    return 0;
}
