#include <stdio.h>

int main(void)
{
    int tab[] = {8, 2, 9, 4, 6};
    int n = 5;
    int *p;

    p = tab;

    for(int i = 0 ; i<n ; i++)
    {
        printf("\n tab[%d] = %d ", i, tab[i]);
        printf("\t *(p+%d) = %d ", i, *(p+i));
        printf("\t &tab[%d] = %p ", i, &tab[i]);
        printf("\t p+%d = %p ", i, p+i);

    }

    return 0;
}
