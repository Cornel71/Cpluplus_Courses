
//Comment highlighted code	Ctrl + Shift + C
//Uncomment highlighted code	Ctrl + Shift + X


#include <iostream>

using namespace std;

class Baza
{
private:
    int x;
protected:
    int y;
public:
    int z;
};

class publicDerived: public Baza
{

public:
    // publicDerived mosteneste variabilele y si z ca fiind public si protected.
    // Variabila x nu se mosteneste deoarece este o variabila declarata ca fiind private in clasa de baza.
    // x nu este accesibila din clasa publicDerived
    // y este protected
    // z este public

    void f1()
    {
        //x = 10; //err
        y = 20;
        cout << "y in clasa publicDerived: " << y << endl;
        z = 30;
        cout << "z in clasa publicDerived : " << z << endl;
    }
};

class protectedDerived: protected Baza
{
    // x nu este accesibila din clasa protectedDerived
    // y este protected
    // z este protected

public:
    void f2()
    {
        //x = 10; //err
        y = 20;
        cout << "y in clasa protectedDerived : " << y << endl;
        z = 30;
        cout << "z in clasa protectedDerived : " << z << endl;
    }
};

class privateDerived: private Baza
{
    // x este not accessible from privateDerived
    // y este private
    // z este private

public:
    void f3()
    {
        //x=10; //err
        y = 20;
        cout << "y in clasa privateDerived : " << y << endl;
        z = 30;
        cout << "z in clasa privateDerived : " << z << endl;
    }
};


int main(void)
{

    Baza Obj;

//    Obj.x = 8; // eroare; x e private; nu poate fi modificat
//    cout << "x (private) din clasa de baza: " << Obj.x << endl;
//    Obj.y = 10; // eroare; y e protected
//    cout << "y (protected) din clasa de baza: " << Obj.y << endl;
//    Obj.z = 12; // ok; z e public. poate fi modificat din afara clasei
//    cout << "z (public) din clasa de baza: " << Obj.z << endl;


    publicDerived Obj1;

//    Obj1.x = 8; // eroare; x e private; nu poate fi modificat
//    cout << "x (private) din clasa de baza: " << Obj1.x << endl;
//    Obj1.y = 10; // eroare; y e protected
//    cout << "y (protected) din clasa de baza: " << Obj1.y << endl;
//    Obj1.z = 234; // ok; z e public. poate fi modificat din afara clasei
//    cout << " Obj1.z : " << Obj1.z << endl;
//    Obj1.f1();


    protectedDerived Obj2;

//    Obj2.x=11; // eroare; x e privat
//    Obj2.y=22; // eroare; y e protected
//    Obj2.z=33; // eroare; z e protected

//       Obj2.f2();


    privateDerived Obj3;
//    Obj3.x=11; // eroare; x e privat
//    Obj3.y=22; // eroare; y e privat
//    Obj3.z=33; // eroare; z e privat

    Obj3.f3();

}
