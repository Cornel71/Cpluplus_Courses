#include <iostream>

int main()
{
    using namespace std;

    char ch = 'M';
    int i = ch;

    cout << "Codul ASCII al caracterului " << ch << " este " << i  << endl;

    cout << "Adaugam 1 la codul caracterului:" << endl;
    ch = ch + 1;          // trecem la urmatorul caracter in ordine lexicografica
    i = ch;               // si salvam noul cod ASCII in i
    cout << "Codul ASCII al caracterului " << ch << " este " << i << endl;

    // folosim functiei cout.put() pentru a afisa un caracter
    cout << "Afisarea caracterului cu ajutorul lui cout.put(ch): ";
    cout.put(ch);

    // utilizarea cout.put() pentru a afisa un caracter
    //cout.put('\n');
    cout.put('!');

    cout << endl << "Done" << endl;

	return 0;
}
