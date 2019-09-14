#include <iostream>
#include <cctype>              // prototypes for character functions

int main()
{
    using namespace std;

    cout << "Introduceti textul ce trebuie analizat,"
            " pentru incheiere introduceti @.\n";

    char ch;

    int spatiu = 0;
    int cifra = 0;
    int caractere = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);  // introduceti primul caracter
   // testare
    while (ch != '@') {
        if(isalpha(ch))         // este un caracter alfanumeric?
            caractere++;
        else if(isspace(ch))    // caracterul este spatiu?
            spatiu++;
        else if(isdigit(ch))    // caracterul este cifra?
            cifra++;
        else if(ispunct(ch))    // este semn de punctuatie?
            punct++;
        else
            others++;

        cin.get(ch);            // citeste urmatoarul caracter
    }

    cout << caractere << " litere, "
         << spatiu << " spatii, "
         << cifra << " cifre, "
         << punct << " semne de punctuatie, "
         << others << " alte caractere.\n";

    return 0;
}
