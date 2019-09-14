#include <iostream>

using namespace std;

/*
   1. Sa se defineasca o clasa "Persoana" avand campurile "nume", "prenume" si "varsta"
      si scrieti metodele de tip getter si setter pentru aceste campuri.
   2. Sa se declare 2 obiect de tip "Persoana".
      Pentru prima persoana folositi metodele de tip getter pentru a citi de la tastatura atributele
      Pentru a doua persoana folositi metodele de tip setter pentru a seta valorile atributelor
    3. Afisati informatiile despre cele 2 persoane :)

*/


class persoana   // nume clasa
{
private:
    int varsta; // Data membra, proprietate, atribut
    string nume; // Data membra, proprietate, atribut
    string prenume; // Data membra, proprietate, atribut

public:
    string getNume();    // Functie membra pt citire raza (de tip getter)
    string getPrenume();    // Functie membra pt citire raza (de tip getter)
    int getVarsta();    // Functie membra pt citire raza (de tip getter)

    void setareNume( string );
    void setarePrenume( string );
    void setareVarsta( int );
    void setareALL(string , string , int );

    void AfisareALL();

};


string persoana::getNume()    // Functie membra pt citire raza (de tip getter)
{
    cout << "Nume = ";
    cin >> nume;

    return nume;
}

string persoana::getPrenume()    // Functie membra pt citire raza (de tip getter)
{
    cout << "Prenume = ";
    cin >>prenume;

    return prenume;
}

int persoana::getVarsta()    // Functie membra pt citire raza (de tip getter)
{
    cout << "Varsta = ";
    cin >>varsta;

    return varsta;
}

void persoana::AfisareALL()    // Functie membra pt citire raza (de tip getter)
{
    cout << "Numele: " << nume <<endl;
    cout << "Prenumele: " << prenume <<endl;
    cout << "Varsta: " << varsta <<endl;

}

void persoana::setareNume( string a )
{
    nume = a;
}


void persoana::setarePrenume( string b )
{
    prenume = b;
}


void persoana::setareVarsta( int c )
{
    varsta = c;
}


void persoana::setareALL( string x, string y, int z )
{
    nume = x;
    prenume = y;
    varsta = z;
}

int main ()
{
    persoana p1, p2;

    p1.getNume();
    p1.getPrenume();
    p1.getVarsta();

    cout << endl << "Datele pentru prima persoana:  " <<endl;
    cout << "===============================  " <<endl;
    p1.AfisareALL();


    p2.setareALL("Popescu","Maria",5);
    cout << endl << "Datele pentru a doua persoana:  " <<endl;
    cout << "===============================  " <<endl;
    p2.AfisareALL();

}
