#include <stdio.h>

int main()
{
    int note[10];

    //presupunem ca avem valori doar pe primele 5 pozitii:
    //atribuim valori elementelor astfel:
    note [0] = 95;
    note [1] = 85;
    note [2] = 77;
    note [3] = 69;
    note [4] = 66;


    // afisati prima nota din vector -> nota[0]
    printf(" nota 0: %d \n", note[0]);

    // afisati suma ultimelor doua note declarate
    int suma =  note[3] + note[4];
    printf(" valoare ultimele 2 note:  %d\n", note[3] + note[4]);

    // afisati valoarea de pe pozitia note[9] si note[11]
printf ("valoare note 9: %d\n", note[9]);
printf ("valoare note 11: %d\n", note[11]);
    return 0;
}

