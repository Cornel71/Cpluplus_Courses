#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nume[20],prenume[20];
    int varsta;

} PERSOANA;


int main()
{
    FILE *pf;
    char numeFisier[25];
    PERSOANA abonati[10] =
    {
        {"Popescu", "Andrei", 35},       // prima structura din tablou
        {"Ionescu", "Maria", 45}         //  urmatoarea structura din tablou
    };

    PERSOANA persoane[2];

    printf("Introduceti numele fisierului in care doriti sa introduceti si apoi sa cititi datele datele: ");
    scanf("%s",numeFisier);

    //deschidere fisier pentru scriere + citire
    pf = fopen(numeFisier,"w+b");
    if (pf == NULL)
    {
        perror("Eroare");
        exit(1);
    }
    // scrierea unui tablou cu mai multe elemente de tip structura PERSOANA intr-un fisier binar
    else
    {
        puts("Fisier (binar) deschis in modul scriere ");
        //fwrite(abonati,sizeof(abonati),1,pf);
        fwrite(abonati,sizeof(PERSOANA),2,pf);
        //printf ("\nx (fwrite)=  %d", x);
    }

    printf("Tabloul cu elemente de tip structura abonat persoane (initial): \n");
    printf("NUME: \t\t%s\n",persoane[0].nume);
    printf("PRENUME: \t%s\n",persoane[0].prenume);
    printf("Varsta: \t%d\n",persoane[0].varsta);

    printf("NUME: \t\t%s\n",persoane[1].nume);
    printf("PRENUME: \t%s\n",persoane[1].prenume);
    printf("Varsta: \t%d\n",persoane[1].varsta);

//    fseek(pf,0,SEEK_END);
//    int n = ftell(pf)/sizeof(PERSOANA);
//    printf("n = %d\n", n);

    fseek(pf,0,SEEK_SET);
    fread(persoane,sizeof(PERSOANA),2,pf);
//    int y = fread(persoane,sizeof(PERSOANA),1,pf);

    printf("Tabloul cu elemente de tip structura abonat \"persoane\" (dupa ce s-au pus datele din fisier): \n");

    printf("\nPrimul element din structura\n");
    printf("NUME: \t\t%s\n",persoane[0].nume);
    printf("PRENUME: \t%s\n",persoane[0].prenume);
    printf("Varsta: \t%d\n",persoane[0].varsta);

    printf("\nAl doilea element din structura\n");
    printf("NUME: \t\t%s\n",persoane[1].nume);
    printf("PRENUME: \t%s\n",persoane[1].prenume);
    printf("Varsta: \t%d\n",persoane[1].varsta);

    if(fclose(pf)!=0)
    {
        puts("Eroare la inchiderea fisierului\n");
    }


}

