/**
Scrieti un program care determina daca un numar este palindrom

Ex. pentru 121 este palindrom; 1234 nu este palindrom

*/


#include <stdio.h>

int main()
{
        int n, reversInt = 0, rest, originalInt;
        printf("Introduceti un numar intreg: ");
        scanf("%d", &n);
        originalInt = n;
        while( n!=0 )
        {
            rest = n%10;
            reversInt = reversInt*10 + rest;
            n /= 10;
        }

        printf("%d valoarea lui reversInt.\n", reversInt);
        printf("%d valoarea lui rest.\n", rest);

        if (originalInt == reversInt)
            printf("%d este palindrome.", originalInt);
        else
            printf("%d nu este palindrome.", originalInt);

        return 0;
}

