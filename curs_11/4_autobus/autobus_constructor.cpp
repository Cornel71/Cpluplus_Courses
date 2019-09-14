/*		CONSTRUCTOR IMPLICIT

Clasa Autobus cu obiect UnAutobus
Avem un obiect UnAutobus care incepe o cursa cu 0 pasageri
Valoarea 0 este stabilita cu ajutorul unui constructor implicit
*/
# include "autobus.h"
# include<iostream>

using namespace std;
/*
class Autobus
{

private:
    // Numarul de pasageri aflati la momentul curent in Autobus
    int nrPasageri; // sau _iNrPasageri

public:

    //Constructor implicit fara parametrii initializeaza obiectele din clasa Autobus
    Autobus();


    //Simuleaza urcarea unui numar de pasageri in autobus
    //parametrul iNrPasageri reprezinta numarul pasagerilor ce urca

    void Urca(int iNrPasageri);


    //Simuleaza coborarea unui numar de pasageri in autobus
    //parametrul iNrPasageri reprezinta numarul pasagerilor ce coboara

    void Coboara(int iNrPasageri);

    //Simuleaza coborarea unui numar de pasageri in Autobus
    //parametrul iNrPasageri reprezinta numarul pasagerilor ce coboara

    void Informatie();

    //Afiseaza informatii despre starea - numarul pasagerilor din Autobus

};
*/
// Implementarea constructorului implicit

Autobus::Autobus()
{
    nrPasageri = 0;
}

void Autobus::Urca(int iNrPasageri)
{

    nrPasageri = nrPasageri + iNrPasageri;

}

void Autobus::Coboara(int iNrPasageri)
{

    nrPasageri = nrPasageri - iNrPasageri;

}

void Autobus::Informatie()
{

    cout<<"Numar de Pasageri: "<< nrPasageri<<endl;
}


int main()
{

    Autobus UnAutobus;  // Construiesc un obiect din clasa Autobus
                        // Constructorul se apeleaza implicit

    UnAutobus.Informatie();  // In Autobus se afla 0 pasageri

    cin.get();     // Actionam o tasta

    UnAutobus.Urca(7); // Autobusul opreste in prima statie, unde urca 7 persoane
    cout<<"Au urcat 7 pasageri"<<endl;  // In Autobus se afla 7 pasageri
    UnAutobus.Informatie();

    cin.get();

    UnAutobus.Coboara(3); // Autobusul opreste a doua statie, unde urca 4 persoane coboara 3
    cout<<"Au coborat 3 pasageri"<<endl;
    UnAutobus.Informatie();

    cin.get();

    UnAutobus.Urca(4);
    cout<<"Au urcat 4 pasageri"<<endl;
    UnAutobus.Informatie();

    cin.get();

    return 0;

}
