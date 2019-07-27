#include <stdio.h>

float mediaNumere(int x, int y)
{
    float media;
    media = (float)(x+y)/2;
    return media;
}
int main()
{
    int a = 2, b =3;
    float m;
    m = mediaNumere(a,b);
    printf("Media celor doua numere %d si %d este %.2f", a, b,m);
    return 0;
}
