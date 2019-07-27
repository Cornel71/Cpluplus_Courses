/*
    Scrieti un program care afiseaza un mesaj de un anumit nr de ori
*/


#include <stdio.h>

int main()
{
    int a = 0;

    // printf ("Valoarea lui a dupa declarare este %d  \n", a);

    do {
        //printf (" Mesaj din bucla do while \n");
        printf ("[%d] Mesaj din bucla do while \n", a);

        a = a + 1; //a++;
        //a = a + 2;

        printf("Valoarea lui a dupa incrementare ( in interiorul buclei do...while) este %d \n",a);
        printf("================\n\n");
    } while (a < 2);

    printf("\nValoarea lui a dupa executia buclei while este %d \n",a);

    return 0;
}

