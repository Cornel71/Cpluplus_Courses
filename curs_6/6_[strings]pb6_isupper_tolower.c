#include<stdio.h>

int main ()
{
    char sir[]="Test Sir.";
    char c;
    int i = 0;

//  while (sir[i]) // while (sir[i] != '\0')
//  {
//    c = sir[i];
//
//    if (isupper(c)!=0) //if (isupper(c))
//        c = tolower(c);
//
//    printf("   ");
//    putchar (c);
//    i++;
//  }

    while (sir[i])
    //while (sir[i] != '\0')
    {

        if ( (isupper(sir[i])) != 0 ) //if (isupper(c))
            putchar (tolower(sir[i]));
        else
            putchar (sir[i]);

        i++;
    }


    printf ("\nSirul initial: ");
    puts (sir);

    return 0;
}
