#include <iostream>
#include <cstring>

using namespace std;

class CERC
{
 //private
 //private:
    double radius;
    double diametru;
    char culoare [20];

};

float aria (CERC crc)
{

    return 3.14 * crc.radius * crc.radius;

}

float perimetru (CERC crc)
{

    return 2 * 3.14 * crc.radius;

}

int main( )
{
    CERC crc;        // Declararea unui variabile numita crc de tip structura CERC
    double a , p;  // Variabila pt aria

    crc.radius = 10;
    crc.diametru = 2*crc.radius;
    strcpy (crc.culoare,"rosu");

    // calculul ariei
    a = aria(crc);
    p = perimetru(crc);
    cout << "Aria cercului este : " << a <<endl;
    cout << "Perimetru cercului este : " << p <<endl;

    return 0;
}
