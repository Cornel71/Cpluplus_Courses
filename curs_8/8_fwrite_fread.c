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
    PERSOANA pers1 = {"Popescu", "Andrei", 20};
    PERSOANA pers2;

    char sir[20], numeFisier[25];
    int pv;

    printf("Introduceti numele fisierului in care doriti sa introduceti si apoi sa cititi datele datele: ");
    scanf("%s",numeFisier);

    //deschidere fisier pentru scriere + citire
    pf = fopen(numeFisier,"wb");
    if (pf == NULL)
    {
        perror("Eroare");
        exit(1);
    }
    else //scrierea unui singur element de tip structura PERSOANA intr-un fisier binar
    {
        puts("Fisier (binar) deschis in modul scriere ");

        fwrite(&pers1,sizeof(PERSOANA),2,pf);
//        int x = fwrite(&pers1,sizeof(PERSOANA),1,pf);
//        printf ("\nx (fwrite) =  %d\n", x);
    }

    printf("Structura abonat pers1 (datele din memorie): \n");
    printf("NUME: \t\t%s\n",pers1.nume);
    printf("PRENUME: \t%s\n",pers1.prenume);
    printf("Varsta: \t%d\n",pers1.varsta);

    printf("Structura abonat pers2 (initial): \n");
    printf("b NUME: \t\t%s\n",pers2.nume);
    printf("b PRENUME: \t%s\n",pers2.prenume);
    printf("b Varsta: \t%d\n",pers2.varsta);

//    citire informatiilor dintr-un fisierul binar
//    fseek(pf,0,SEEK_SET);

    fread(&pers2,sizeof(PERSOANA),1,pf);
    int y = fread(&pers2,sizeof(PERSOANA),1,pf);
    printf ("\ny (fread) =  %d", y);

    printf("Structura abonat b (dupa ce s-au pus datele din fisier): \n");
    printf("b NUME: \t%s\n",pers2.nume);
    printf("b PRENUME: \t%s\n",pers2.prenume);
    printf("b Varsta: \t%d\n",pers2.varsta);

    fseek(pf, 0, SEEK_END);
    int df = ftell(pf)/sizeof(PERSOANA);

//    Varianta fara structuri
//    fread(sir,sizeof(pers1.nume),1,pf);
//    printf("NUME: \t\t%s\n",sir);
//    fread(sir,sizeof(pers1.prenume),1,pf);
//    printf("PRENUME: \t%s\n",sir);
//    fread(&pv,sizeof(pers1.varsta),1,pf);
//    printf("Varsta: \t%d\n",pv);

    if(fclose(pf)!=0)
    {
        puts("Eroare la inchiderea fisierului\n");
    }

}

