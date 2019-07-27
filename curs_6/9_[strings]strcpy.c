#include<stdio.h>
#include<string.h>

/* char * strcpy ( char * destination, const char * source ); */

int main()
{
    char sir[20] = "TutorialCrystalMind";
    char copie1[20], copie2[20] = "mesaj";
    int i = 0, n;

    printf("\n -----------------\n");

    printf("\nadresa sir: %p \n", sir);
    printf("adresa copie1: %p \n", copie1);
    printf("adresa copie2: %p \n", copie2);

    printf("\n -----------------\n");
    //copie1[19] = '\0';

    printf("copie1: %s\n", copie1);
    printf("sir: %s\n", sir);
    printf("copie2: %s\n", copie2);

//    printf("\n20 in baza 16: %x ", 20);
//    printf("\nsuma  : %x ", copie1 + 20);
    printf("\ndiferenta  : %d ", sir - copie1);
    printf("\ndiferenta  : %d ", copie1 - copie2);

//    while (copie2[i]) // while (sir[i]!='\0')
//    {
//        printf("%d - ", copie2[i]);
//        i++;
//    }

    // vrem sa copiem valoarea sirului s in s2
    //sir1 = sir;    // varianta naiva: nu functioneaza, eroare la compilare

    // varianta muncitoreasca
    printf("\n -----------------\n");
    n = strlen(sir);
    printf ("dimensiunea sirului \"%s\" este %d",sir, n);

    printf ("\ncopiem caracter cu caracter: ");
    for (i=0; i < n; i++)
    {
        copie1[i] = sir[i];
    }
    copie1[n]='\0';


    printf("\nsir: %s\n", sir);
    printf("sir1: %s\n", copie1);
    printf("sir2: %s\n", copie2);

    printf("\n -----------------\n");
    // varianta cea mai usoara:
    //strcpy(copie2, "un mesaj nou"); // strcpy copiaza sirul "sir" in "copie2"
    strcpy(copie2, sir);
    printf("sir: %s\n", sir);
    printf("sir1: %s\n", copie1);
    printf("sir2: %s\n", copie2);

    return 0;
}
