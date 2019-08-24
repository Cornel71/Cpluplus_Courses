#include <stdio.h>
#include <stdlib.h>

struct LISTA
{
    int val;
    struct LISTA *urm;
};

int main()
{
    // alocam spatiu pentru doua structuri de tip LISTA.
    // campul val al structurii va retine o valoare de tip int
    // campul urm retine un pointer catre o alta structura de tip LISTA
    struct LISTA *x = (struct LISTA*) malloc(sizeof(struct LISTA));
    struct LISTA *y = (struct LISTA*) malloc(sizeof(struct LISTA));

    x->val = 2;
    x->urm = y;
    y->val = 4;
    y->urm = x;
    // Pentru a ne da seamna valoarea expresiei x->urm->urm->urm->val,
    // inlocuim de la stanga spre dreapta termenii conform definitiei de mai sus
    // x->urm = y; y->urm =x;
    printf("%d ",x->urm->urm->urm->val);
    // inlocuim primul x->urm cu y si rezulta expresia echivalenta de mai jos
    printf("%d ",y->urm->urm->val);
    // inlocuim y->urm cu x. Rezulta expprintf("%d ",x->urm->urm->urm->val);resia:
    printf("%d ",x->urm->val);
    // inlocuim x->urm cu y. Rezulta expresia:
    printf("%d ",y->val);
    // eliberam spatiul alocat
    free(x);
    free(y);

    return 0;
}
