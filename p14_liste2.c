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
    // declaram inca un pointer catre o strucrura LISTA
    // Momentan, pointerul nu indica catre nici o locatie de memorie
    struct LISTA *p;

    x->val = 2; //(*x).val = 2
    x->urm = y;
    y->val = 4;
    y->urm = x;
    // acum p si x sunt doi pointeri identici (indica catre acceasi locatie in memorie)
    // ==> in orice expresie care contine x, il putem inlocui cu p
    // ==> x->urm  este echivalent cu p->urm (ambele sunt egale cu y)
    p = x;
    // Pentru a ne da seamna valoarea expresiei p->urm->urm->urm->urm,
    // inlocuim de la stanga spre dreapta termenii conform definitilor de mai sus
    p = p->urm->urm->urm->urm;
    // p->urm->urm->urm->urm echivalent cu:
    // y->urm->urm->urm echivalent cu:
    // x->urm->urm echivalent cu:
    // y->urm echivalent cu:
    // x
    printf("%d",p->val); // echivalent cu x->val

    // eliberam spatiul alocat
    free(x);
    free(y);
    return 0;
}
