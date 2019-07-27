#include <stdio.h>

int main ()
{

    int  var;
    int  *ptr;
    int  **pptr;
    int  ***ppptr;

    var = 3000;

    /* retine adresa variabilei var */
    ptr = &var;

    /* retine adresa lui ptr utilizand operatorul & */
    pptr = &ptr;

     /* retine adresa lui pptr utilizand operatorul & */
    ppptr = &pptr;


    printf("\n----------------- \n");
    printf("Valoarea lui var = %d\n", var );
    printf("Valoarea lui var folosind dereferentierea  *ptr = %d\n", *ptr );

    printf("\n----------------- \n");
    printf("Adresa lui var = %p\n", &var );
    printf("Adresa lui var = %d\n", &var );
    printf("Valoarea memorata in ptr = %p\n", ptr );

    printf("\n----------------- \n");
    printf("Adresa lui ptr = %p\n", &ptr );
    printf("Valoarea memorata in pptr = %p\n", pptr );

    printf("\n----------------- \n");
    printf("Deferentiere multipla **pptr = %d\n", **pptr);
    printf("Deferentiere multipla **pptr = %d\n", *(*pptr));

    printf("\n----------------- \n");
    printf("Deferentiere multipla ***ppptr = %d\n", ***ppptr);
    printf("Deferentiere multipla ***ppptr = %d\n", *(*(*ppptr)));

    printf("\n----------------- \n");
    printf("Adresa lui pptr = %p\n", &pptr);
    printf("Adresa lui pptr = %p\n", ppptr);

    printf("\n----------------- \n");
    printf("Adresa lui ppptr = %p\n", &ppptr);

    printf("\n----------------- \n");
    printf("Valoarea memorata in ppptr = %p\n", ppptr);
    printf("Adresa lui pptr = %p\n", &pptr);

    printf("\n test **ppptr----------------- \n");
    printf("Valoarea memorata in ppptr = %p\n", **ppptr);
    printf("Valoarea memorata in ppptr = %d\n", **ppptr);
    //printf("Adresa lui pptr = %p\n", &pptr);


    return 0;
}
