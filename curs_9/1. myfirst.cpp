#include <iostream>    // directiva PREPROCESSOR ce introduce in fisierul sursa continutul bibliotecii <iostream>

int main()             // header functie
{
    // inceput continut functie
    using namespace std;
    //permite folosirea functiilor din biblioteca std
    //fara a mai fi nevoie de specificarea ei la fiecare utilizare a
    //unei functii sau variabile in codul sursa.

    cout << "Azi invatam C++.";  // mesaj
    cout << endl;                             // trecere pe linie noua. echivalent cu \n

    cout << "Veti vedea ca nu e greu!" << endl << "Alt mesaj";

    return 0;                                 // final main()
}                                             // sfarsit continut functie
