#include <stdio.h>

typedef struct
{
    int an, luna, zi;
} DATA;

/**
 * Compara doua date de tipul stuctura DATA;
   Returneaza 0, daca datele sunt egale, -1 daca d1 < d2, 1 daca d1 > d2
 */
int comparaDate(DATA d1, DATA d2)
{
    if (d1.an < d2.an)
        return -1;

    else if (d1.an > d2.an)
        return 1;

    if (d1.an == d2.an)
    {
        if (d1.luna < d2.luna)
            return -1;
        else if (d1.luna > d2.luna)
            return 1;
        else if (d1.zi < d2.zi)
            return -1;
        else if (d1.zi > d2.zi)
            return 1;
        else
            return 0;
    }
    else
    {
        return 0;
    }
}

int main()
{
    DATA date[100], minData;
    int n, i;

    printf("Cate date doriti sa introduceti? ");
    scanf("%d", &n);

    for (i = 0; i<n; ++i)
    {
        printf("Introdu data %d in formatul zi-luna-an ", i);
        scanf("%d-%d-%d", &date[i].zi, &date[i].luna, &date[i].an);
    }

    minData = date[0];
    for (i = 1; i<n; ++i)
    {
        if(comparaDate(date[i], minData) < 0) //if(comparaDate(date[i], minData) == -1)
        {
            minData = date[i];
        }
    }

    printf("Cea mai mica din datele introduse este %d-%d-%d",
           minData.zi, minData.luna, minData.an);
    return 0;
}
