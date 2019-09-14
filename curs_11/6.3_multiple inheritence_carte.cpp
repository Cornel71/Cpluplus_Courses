#include <iostream>
#include <string>

using namespace std;

class Carte
{
    string titlu;
    float cost2 = 100;

protected:
    void afis_cost2()
    {
        cout<<"costul2 "<<cost2<<endl;
    }

public:
    Carte(string titlu)
    {
        Carte::titlu = titlu;
        cout<<"Constructorul clasei de baza1"<<endl;
    }
    void afis_carte()
    {
        cout<<"titlul cartii este "<<titlu<<endl;
    }
    ~Carte()
    {
        cout<<"Destructorul clasei de baza1"<<endl;
    }
protected:
    float cost;
    void afis_cost()
    {
        cout<<"cartea costa "<<cost<<endl;
    }
};

class Pagini
{
protected:
    int linii;
public:
    Pagini(int linii)
    {
        Pagini::linii=linii;
        cout<<"Constructor clasa de baza2"<<endl;
    }
    void afis_pagini()
    {
        cout<<"cartea are nr de pagini "<<linii<<endl;
    }
    ~Pagini()
    {
        cout<<"Destructorul clasei de baza2"<<endl;
    }

};

class FisaBiblioteca: public Carte, public Pagini
{
    string autor, editura;

public:
    FisaBiblioteca(string titlu, string autor, string editura):Carte(titlu),Pagini(166)
    {
        FisaBiblioteca::autor = autor;
        FisaBiblioteca::editura = editura;
        cost = 49.98;

        cout<<"Constructorul clasei derivate"<<endl;
    }
    void afis_biblio()
    {
        afis_carte();
        afis_cost();
        afis_cost2();
        cout<<"autor: "<<autor<<endl;
        cout<<"editura "<<editura<<endl;
        afis_pagini();
    }
    ~FisaBiblioteca()
    {
        cout<<"Destructorul clasei derivate"<<endl;
    }
};

int main()
{
    FisaBiblioteca fisa("C++ Programming", "Stroustrup", "ALL");

    fisa.afis_biblio();
}
