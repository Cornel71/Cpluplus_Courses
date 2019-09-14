#include <iostream>
#include <string>               // include clasa string
#include <cstring>              // biblioteca pentru siruri de caractere C-style

int main()

{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "pantera";

    int sz1 = sizeof(str1);
    int sz2 = sizeof(str2);
    cout << sz1 << "   " << sz2 << endl;

    // atribuirea in cazul obiectelor de tip string si al sirurilor de caractere
    str1 = str2;                // copiaza str2 in str1 (in C++ se poate -> este definit tipul de date string)
    strcpy(charr1, charr2);     // copiaza charr2 in charr1 (in C, tipul de date string nu exista)

    // adaugarea de obiecte de tip string si siruri de caractere
    str1 += " neagra";           // adauga sirul "neagra" la finalul lui str1
    strcat(charr1, " rapid");   // adauga sirul "rapid" la finalul lui charr1

    // determinarea lungimii unui obiect de tip string si a unui sir de caractere
    int len1 = str1.size();     // determinare lungime str1 (C++)
    int len2 = strlen(charr1);  // determinare lungime charr1 (C)

    cout << "Obiectul de tip string (C++): " << str1 << " = contine "
         << len1 << " caractere.\n";
    cout << "Sirul de caractere (C): " << charr1 << " = contine "
         << len2 << " caractere.\n";

    int sz = sizeof(str2);
    cout << sz;


    return 0;
}
