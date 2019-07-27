/**
Scrieti un program care afiseaza un mesaj cat timp o variabila este mai mica decat o anumita valoare
*/


#include <stdio.h>

int main()
{
    int a = 0;

    printf ("Valoarea lui 'a' dupa declarare este %d  \n", a);

    while ( a < 5)
    {

        printf ("[%d] Mesaj din bucla while \n", a);
        printf("Valoarea lui a din timpul executia buclei while este %d \n",a);
        printf("================\n\n");

        a = a + 1; //a++;
        //a = a + 2;
    }

    printf("\nValoarea lui a dupa executia buclei while este %d \n",a);

    return 0;
}

