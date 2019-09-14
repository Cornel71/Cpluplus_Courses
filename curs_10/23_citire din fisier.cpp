#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string linie;

    ifstream fisier ("exemplu.txt");

    if (fisier.is_open())
    {
        while ( getline (fisier,linie) )
        {
            cout << linie <<endl;
        }
        fisier.close();
    }
    else cout << "Fisierul nu a putut fi deschis :(";

    return 0;
}
