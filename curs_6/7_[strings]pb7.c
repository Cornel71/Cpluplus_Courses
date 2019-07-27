#include<stdio.h>


int main ()
{
    char sir[100], ch;
    int i, contor = 0, n;

    printf("introduceti sirul: ");
    gets(sir);

    printf("introduceti caracterul cautat: ");
    scanf ("%c", &ch);

    n = strlen(sir);

    for(i=0; i<n; i++)   // sau for(i=0;sir[i]!='\0';i++)
    {
        //if(sir[i] == ch)
        if((sir[i] == ch) || (sir[i] == toupper(ch)) || (sir[i] == tolower(ch)))
        {
            contor++;
        }
    }


    printf("caracterul \'%c\' apare de %d ori", ch, contor);

    return 0;
}
