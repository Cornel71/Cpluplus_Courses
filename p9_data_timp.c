#include <stdio.h>
#include <string.h>

// luna este acum reprezentata printr-un sir de caractere
typedef struct
{
    int an, zi;
    char luna[20];
} DATA;

typedef struct
{
    int ora, minut, secunda;
} TIMP;

typedef struct
{
    DATA dt;
    TIMP tmp;
} DATA_TIMP;

/**
 * Compara doua date de tipul stuctura DATA;
 * Returneaza 0, daca sunt egale, 1 daca nu sunt egale
 */

int egalitateDate(DATA d1, DATA d2)
{
    if (d1.an == d2.an && d1.zi == d2.zi && strcmp(d1.luna, d2.luna) == 0 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// returneaza cate secunde se afla intr-o structura timp
int secundeInTimp(TIMP t1)
{
    int moment;

    moment = t1.ora*60*60+t1.minut*60+t1.secunda;

    return moment;
}

/**
 * Compara doua elemente de tipul structura TIMP
 * Returneaza 0, daca sunt egale, -1 daca t1 < t2, 1 daca t1 > t2
*/
int comparaTimp(TIMP t1, TIMP t2)
{
    //int m1, m2;
    //m1 = secundeInTimp(t1);
    //m2 = secundeInTimp(t2);

    if (secundeInTimp(t1) < secundeInTimp(t2))
    {
        return -1;
    }
    else if (secundeInTimp(t1) == secundeInTimp(t2))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    DATA_TIMP data_timp1, data_timp2;

    data_timp1.dt.an = 2016;
    strcpy(data_timp1.dt.luna, "Martie");
    data_timp1.dt.zi = 25;

    data_timp1.tmp.ora = 19;
    data_timp1.tmp.minut = 03;
    data_timp1.tmp.secunda = 25;

    printf("Introdu data 2 (zi, luna si apoi anul): ");
    scanf("%d", &data_timp2.dt.zi);
    scanf("%s", data_timp2.dt.luna);
    scanf("%d", &data_timp2.dt.an);

    printf("Introdu ora 2 in formatul ora:minut:secunda : ");
    scanf("%d:%d:%d", &data_timp2.tmp.ora, &data_timp2.tmp.minut, &data_timp2.tmp.secunda);

    printf("Data introdusa este: %d-%s-%d  %d:%d:%d\n", data_timp2.dt.zi, data_timp2.dt.luna, data_timp2.dt.an,
           data_timp2.tmp.ora, data_timp2.tmp.minut, data_timp2.tmp.secunda);

    if (comparaTimp(data_timp1.tmp, data_timp2.tmp)==0 && egalitateDate(data_timp1.dt, data_timp2.dt)==0)
    {
        printf("Cele doua date sunt egale");
    }
    else
    {
        printf("Cele doua date difera");
    }

    return 0;
}
