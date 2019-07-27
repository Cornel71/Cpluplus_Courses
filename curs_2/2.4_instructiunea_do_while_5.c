/*

Folositi instructiunea while/do while pentru a forta utilizatorul sa introduca date corecte (conforme cu diverse cerinte).
Exemplu: O data calendaristica nu poate avea ziua <=0 sau >=32. Similar, luna nu poate fi <=0 sau >=13


*/


#include <stdio.h>

int main()
{
    int a, b, luna;

    do
    {
        //cate_numere++;

        printf("Introduceti data ");
        scanf("%d %d %d", &a, &luna, &b);
        printf("data introdusa este: %d %d %d\n", a, luna, b);

    } while ((a <= 0) || (a >= 32) || (luna <= 0) || (luna >= 13));

    printf("\nData introdusa este %d %d %d \n", a, luna, b);

    return 0;


}

