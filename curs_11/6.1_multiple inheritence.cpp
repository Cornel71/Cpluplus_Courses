#include <iostream>
/*

La declararea obiectului "obj" de tipul Derivat s-au apelat constructorii  claselor de baza (Baza1 si Baza2),
in ordinea in care apar in declararea clasei derivate:
mai intai constructorul clasei Baza1, in care x este data membru protejata (accesibila din clasa derivat);
apoi constructorul clasei Baza2, in care y este data membru protejata (accesibila din clasa derivat);
apoi constructorul clasei Derivat care le incorporeaza pe acestea intr-un singur obiect.
Clasa derivat nu are date membre, ci doar metode.

Dupa iesirea din blocul in care a fost declarata obiectul "obj",
se apeleaza automat destructorii, in ordine inversa apelarii constructorilor.

*/

using namespace std;

class Baza1
{
protected:
    int x;
public:
    Baza1 (int xx)
    {
        x = xx;
        cout << "Constructor clasa de baza 1" << endl;
        cout << "x = " << x << endl;
    }
    ~Baza1()
    {
        cout<< "Destructorul clasei de baza 1" << endl << "x = " << x << endl;
    }
    void afisareX()
    {
        cout<<" x = "<< x << endl;
    }
};

class Baza2
{
protected:
    int y;
public:
    Baza2 (int yy)
    {
        y = yy;
        cout << "Constructor clasa de baza 2" << endl << "y = " << y << endl;
    }
    ~Baza2()
    {
        cout<<"Destructor clasa de baza 2" << endl;
    }
    void afisareY()
    {
        cout<< " y = " << y << endl;
    }
};

class Derivat: public Baza1, public Baza2
{
public:
    Derivat(int xx, int yy): Baza1(xx), Baza2(yy)
    {
        cout<<"Constructorul clasei derivate" << endl;
        cout<<"x = " << x <<' '<<"y = " << y << endl;
    }
    ~Derivat()
    {
        cout<<"Destructor Derivat\n";
        cout<<"x = " << x <<' '<<"y = " << y << endl;
    }
    int afisareDeriv()
    {
        cout<<"x = " << x <<' '<<"y = " << y << endl;
    }
    void setXY(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
};

int main()
{
    Derivat obj(7,8);

    cout<<endl<<"Metoda de afisare din clasa derivata: "<<endl;
    obj.afisareDeriv();

    obj.setXY(1,2);
    cout<<endl<<"Metoda de afisare din clasa de baza 1: "<<endl;
    obj.afisareX();
    cout<<endl<<"Metoda de afisare din clasa de baza 2: "<<endl;
    obj.afisareY();
    cout<<endl<<"Metoda de afisare din clasa derivata: "<<endl;
    obj.afisareDeriv();

}
