
//Comment highlighted code	Ctrl + Shift + C
//Uncomment highlighted code	Ctrl + Shift + X


#include <iostream>

using namespace std;
/*
    In clasa de baza data membra x este private, y este protected si z este public.
    In clasa de baza, cat si in clasele derivate exista constructori care initializeaza datele membru.
    Membrii private dintr-o clasa de baza (clasa "Baza", in cazul nostru) pot fi folositi doar in cadrul acesteia (de metodele sale),
    nu si in clasele derivate.
*/
class Baza
{
private:
    int x;
protected:
    int y;
    void setX (int a)
    {
        x = a;
    }
    void setY(int b)
    {
        y = b;
    }
public:
    int z;
    Baza ()
    {
        x = 0;
        y = 0;
        z = 0;
        cout<<"Constructor cls. baza - "<< endl;
    }
    Baza (int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
        cout<<"Constructor cls. baza - "<< endl;
    }
    ~Baza()
    {
        cout<<"Destructor clasa de baza - ";
    }
    void afisare()
    {
        cout<<x<<' '<<y<<' '<<z<< endl;
    }
    int calculBaza()
    {
        return x+y+z;
    }
    //friend ostream & operator<<(ostream &, const Baza &);
};
/*
Membrii privati mosteniti din clasa baza sunt inaccesibili (x exista, dar este incapsulat).
Pentru a putea fi accesati, se folosesc metodele clasei baza (metoda calcul).
Daca in clasa "publicDerived" ar exista o metoda cu acelasi nume cu al unei metode din clasa de baza (redefinirea unei metode in clasa derivata),
se foloseste operatorul de rezolutie (a se vedea exemplul 5.3_clase derivate_claritate).
*/

class publicDerived: public Baza
{
    int w;

public:
    // publicDerived mosteneste variabilele y si z ca fiind public si protected.
    // Variabila x nu se mosteneste deoarece este o variabila declarata ca fiind private in clasa de baza.
    // x nu este accesibila din clasa publicDerived
    // y este protected
    // z este public
    publicDerived ():Baza()
    {
        w = 0;
        cout<<"Constructor clasa derivata publicDerived  " << endl;
    }
    publicDerived (int a, int b, int c, int d):Baza(a, b, c)
    {
        w = d;
        cout<<"Constructor clasa derivata publicDerived  " << endl;
    }
    ~publicDerived()
    {
        cout<<"Destructor clasa derivata publicDerived  "<< endl;
    }
    void f1()
    {
        //x=10; //err
        y = 20;
        cout << "y in clasa publicDerived: " << y << endl;
        z = 30;
        cout << "z in clasa publicDerived : " << z << endl;
    }
    void setW (int a)
    {
        w = a;
    }
    void setY(int b)
    {
        y = b;
    }
    int calculPublicDerived()
    {
        return w+y+z;   // membrul x este incapsulat, nu poate fi folosit, fiind private
    }
    // o alternativa pentru obtinerea sumei tuturor datelor membre este:
    // int calcul(){return Baza::calculBaza()+w;}
    //friend ostream & operator<<(ostream &, const publicDerived &);
};

/*
Deoarece mostenirea este protejata, membrii publici sau protejati din clasa baza devin protejati in clasa "protectedDerived".
*/

class protectedDerived: protected Baza
{
    // x nu este accesibila din clasa protectedDerived
    // y este protected
    // z este protected

    int w;
public:

    protectedDerived ():Baza()
    {
        w = 0;
        cout<<"Constructor clasa derivata protectedDerived " << endl;
    }
    protectedDerived (int a, int b, int c, int d):Baza(a, b, c)
    {
        w = d;
        cout<<"Constructor clasa derivata protectedDerived " << endl;
    }
    ~protectedDerived()
    {
        cout<<"Destructor clasa derivata protectedDerived "<< endl;
    }
    void f2()
    {
        //x=10; //err
        y = 20;
        cout << "y in clasa protectedDerived : " << y << endl;
        z = 30;
        cout << "z in clasa protectedDerived : " << z << endl;
    }
    void setW (int a)
    {
        w = a;
    }
    void setY(int b)
    {
        y = b;
    }
    void setZ(int c)
    {
        z = c;
    }
    int calculProtectedDerived()
    {
        return w+z+y;
    }
    //friend ostream & operator<<(ostream &, const protectedDerived &);
};

/*
Deoarece mostenirea este privata, membrii public sau protected din clasa baza au devenit privati in clasa "privateDerived".
Se pot folosi toti membrii clasei de baza, cu exceptia celor privati
*/

class privateDerived: private Baza
{
    // x este not accessible from privateDerived
    // y este private
    // z este private
    int w;
public:
    privateDerived ():Baza()
    {
        w = 0;
        cout<<"Constructor clasa derivata privateDerived " << endl;
    }
    privateDerived (int a, int b, int c, int d):Baza(a, b, c)
    {
        w = d;
        cout<<"Constructor clasa derivata privateDerived " << endl;
    }
    ~privateDerived()
    {
        cout<<"Destructor clasa derivata privateDerived "<< endl;
    }
    void setW (int a)
    {
        w = a;
    }
    void setY(int b)
    {
        y = b;
    }
    void setZ(int c)
    {
        z = c;
    }

    void f3()
    {
        //x=10; //err
        y = 20;
        cout << "y in clasa privateDerived : " << y << endl;
        z = 30;
        cout << "z in clasa privateDerived : " << z << endl;
    }

    int calculPrivateDerived()
    {
        return w+z+y;
    }
    //friend ostream & operator<<(ostream &, const privateDerived &);
};

int main()
{

    //Baza Obj;

//    Obj.x = 8; // eroare; x e private; nu poate fi modificat
//    cout << "x (private) din clasa de baza: " << Obj.x << endl;
//    Obj.y = 10; // eroare; y e protected
//    cout << "y (protected) din clasa de baza: " << Obj.y << endl;
//    Obj.z = 12; // ok; z e public. poate fi modificat din afara clasei
//    cout << "z (public) din clasa de baza: " << Obj.z << endl;
//
//
    publicDerived Obj1;

//    Obj1.x = 8; // eroare; x e private; nu poate fi modificat
//    cout << "x (private) din clasa de baza: " << Obj1.x << endl;
//    Obj1.y = 10; // eroare; y e protected
//    cout << "y (protected) din clasa de baza: " << Obj1.y << endl;
    Obj1.z = 234; // ok; z e public. poate fi modificat din afara clasei
    cout << " Obj1.z : " << Obj1.z << endl;

    Obj1.f1();

    Obj1.z = 50;
    //Obj1.setX(20);
    Obj1.setW(20);
    Obj1.setY(30);
    int sumWYZ = Obj1.calculPublicDerived();
    cout << "  Obj1.calculPublicDerived : " <<  sumWYZ << endl;
    cout << "  Obj1.calculPublicDerived : " <<  Obj1.calculPublicDerived() << endl;

//    protectedDerived Obj2;
//
//    Obj2.x=11; // eroare; x e privat
//    Obj2.y=22; // eroare; y e protected
//    Obj2.z=33; // eroare; z e protected
//
//    Obj2.f2();
//    Obj2.setW(20);
//    Obj2.setY(20);
//    Obj2.setZ(20);
//    int sumYWZ = Obj2.calculProtectedDerived();
//    cout << "  Obj2.calculProtectedDerived : " <<  sumYWZ << endl;
//    cout << "  Obj2.calculProtectedDerived : " <<  Obj2.calculProtectedDerived() << endl;

//
//    privateDerived Obj3;
//    Obj3.x=11; // eroare; x e privat
//    Obj3.y=22; // eroare; y e privat
//    Obj3.z=33; // eroare; z e privat
//
//    Obj3.f3();
//
//    Obj3.setW(20);
//    Obj3.setY(20);
//    Obj3.setZ(20);
//    int sumZWY = Obj3.calculPrivateDerived();
//    cout << "  Obj3.calculPrivateDerived : " <<  sumZWY << endl;
//    cout << "  Obj3.calculPrivateDerived : " <<  Obj3.calculPrivateDerived() << endl;

//    Baza Obj(10, 10, 20);  // Constructor clasa de baza
//    publicDerived Obj1(100, 200, 300, 400); // Constructor clasa derivata "publicDerived"
//    protectedDerived Obj2(500, 600, 700, 800); // Constructor clasa derivata "protectedDerived"
//    privateDerived Obj3(600, 700, 800, 900);  //Constructor clasa derivata "privateDerived"
//
//    int s = Obj.calculBaza();
//    cout << "  metoda calcul din clasa de baza : " <<  s << endl;
//    int s1 = Obj1.calculPublicDerived();
//    cout << "  metoda calcul din clasa derivata - publicDerived : " <<  s1 << endl;
//    int s2 = Obj2.calculProtectedDerived();
//    cout << "  metoda calcul din clasa derivata - protectedDerived : " <<  s2 << endl;
//    int s3 = Obj3.calculPrivateDerived();
//    cout << "  metoda calcul din clasa derivata - privateDerived : " <<  s3 << endl;


    /////////////////cout<<"Obj = "<< Obj << endl << "Obj2 = "<< Obj2 << endl << "Obj3 = "<< Obj3 <<endl;

}
