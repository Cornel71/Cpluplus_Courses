#include <stdio.h>

int main()
{
    int i;
    i = 100;
    i += (i > 0) + (i < 1000) + (i >= 100) + (i <= 100);
    printf("numarul este egal cu %i", i);
    return 0;
}
