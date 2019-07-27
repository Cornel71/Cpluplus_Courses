#include <stdio.h>

int main()
{
    int i;
    i = 100;
    i = (i == 100) + (i != 101);
    printf("numarul este egal cu %i", i);
    return 0;
}
