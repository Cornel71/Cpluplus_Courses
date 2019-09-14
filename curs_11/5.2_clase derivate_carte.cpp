#include <iostream>
#include <string>

using namespace std;

class Carte
{
    string titlu;

public:
    Carte(string titlu)
    {
        Carte::titlu = titlu;
    }
    void afis_carte()
    {
        cout<<"titlul cartii este "<<titlu<<endl;
    }
protected:
    float cost;
    void afis_cost()
    {
        cout<<"cartea costa "<<cost<<endl;
    }
};

class FisaBiblioteca: public Carte
{
    string autor, editura;
public:
    FisaBiblioteca(string titlu, string autor, string editura): Carte(titlu)
    {
        FisaBiblioteca::autor = autor;
        FisaBiblioteca::editura = editura;
        cost = 49.98;
    }
    void afis_biblio()
    {
        afis_carte();
        afis_cost();
        cout<<"autor: "<<autor<<endl;
        cout<<"editura: "<<editura<<endl;
    }
};

int main()
{
    FisaBiblioteca fisa ("C++ Programming", "Stroustrup", "Humanitas");
    //fisa.afis_cost();
    //fisa.cost;
    fisa.afis_biblio();
}
