#include<stdio.h>
#include<string.h>

/*
const char * strstr ( const char * str1, const char * str2 );
      char * strstr (       char * str1, const char * str2 );

*/

int main()
{
    char sir1[] = "TutorialCrystalMind";
    char sir2[] = "TutorialMindCrystalMind";
    char sir3[] = "TutorialCrystal";
    char subsir[] = "Mind";

    char *p1, *p2, *p3, *p4;

    p1 = strstr(sir1, subsir);
    p2 = strstr(sir2, subsir);
    p3 = strstr(sir3, subsir);
    p4 = strstr(subsir, sir1);

    printf("\n -----------------\n");
    printf("adresa de inceput a sirului 1 %p \n", sir1);
    printf("adresa de inceput a sirului 2 %p \n", sir2);
    printf("adresa de inceput a sirului 3 %p \n", sir3);
    printf("adresa de inceput a sub sirului %p \n", subsir);

    printf("\n -----------------\n");
    printf("strstr(sir1, subsir) %p \n", p1);
    printf("strstr(sir2, subsir) %p \n", p2);
    printf("strstr(sir3, subsir) %p \n", p3);
    printf("strstr(subsir, sir1) %p \n", p4);


    printf("\n -----------------\n");
    printf("strstr(sir1, subsir) %s \n", p1);
    printf("strstr(sir2, subsir) %s \n", p2);
    printf("strstr(sir3, subsir) %s \n", p3);
    printf("strstr(subsir, sir1) %s \n", p4);


    return 0;

}
