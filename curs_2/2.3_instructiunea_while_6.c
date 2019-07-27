/*
Scrieti un program care determina inversul unui numar

Ex. pentru 12345 => 54321

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

        printf("Inversul valorii %d este: %d \n", originalInt, reversInt);

        return 0;
}

