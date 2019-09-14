#include <iostream>

using namespace std;

class Baza
{
public:
    void afisare()
    {
        cout<<"Suntem in clasa de baza"<<endl;
    }
};

class Derivata: public Baza
{
public:
    void afisare()
    {
        //Baza::afisare();
        cout<<"Suntem in clasa derivata"<<endl;
    }
};

int main()
{
    Derivata obiect;
 //   obiect.afisare(); //se va utiliza functia din clasa Derivata
 //   obiect.Baza::afisare(); //se va utiliza functia din clasa Baza

    cout<<"======================="<<endl;

    Baza ob;
    ob.afisare(); //se va utiliza functia din clasa Baza
    ob.Baza::afisare(); //se va utiliza functia din clasa Baza

    //ob.Derivata::afisare(); // eroare
}
