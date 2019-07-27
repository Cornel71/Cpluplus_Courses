#include <stdio.h>

int n = 2;

void Altceva()
{
    n = n * 3;

}

void Ceva()
{
    n = n + 5;
}

int main()
{


    Altceva();
    Ceva();

    printf("n = %d ", n);

    return 0;
}
