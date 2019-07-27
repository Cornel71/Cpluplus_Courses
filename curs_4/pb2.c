// Exemplul numarul 2 cu functii
// Main-ul este identic cu cel din ex 1 pentru a demonstra ca implementarea unei functii se poate schimba
// atata vreme cat modul de apelare ramane identic
// Functiile citireNumar() si afisareNumar() demonstreaza returnarea de valori si primire lor ca paremetri, respectiv
// Functia citireSiAfisareNumar() demonstreaza apelarea acestor functii
// A se observa numele variabilelor, care exista doar in contextul functiei
#include <stdio.h>


void afisareText()
{
    printf("Introduceti un numar: ");
}

// functie ce citeste de la tastatura un numar si il returneaza
int citireNumar()
{
    int x;

    scanf("%d", &x);

    return x;
}

// functie ce ia ca parametru un numar si il afiseaza
void afisareNumar(int k)
{
    printf("Numarul este %d\n", k);
}

void citireSiAfisareNumar()
{
    // functia are acum o alta implementare
    int n;
    n = citireNumar();
    afisareNumar(n);
}

int main()
{
    afisareText(); // apelam functia de afisare a textului
    citireSiAfisareNumar(); // apelam functia care face citirea si afisarea numarului

    afisareNumar(8.6666);
    printf("Numarul este %.4f\n", 8.6666);

    return 0;
}
