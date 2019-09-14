#include <iostream>
#include <string>               // include clasa string
/*
string (1)
int compare (const string& str) const;

substrings (2)
int compare (size_t pos, size_t len, const string& str) const;
int compare (size_t pos, size_t len, const string& str, size_t subpos, size_t sublen) const;

c-string (3)
int compare (const char* s) const;
int compare (size_t pos, size_t len, const char* s) const;

buffer (4)
int compare (size_t pos, size_t len, const char* s, size_t n) const;
*/

int main()
{
    using namespace std;

    string str1 = "green apple";
    string str2 = "red apple";

    if (str1.compare(str2) != 0)
        cout << str1 << " nu e identic cu  " << str2 << endl;

    if (str1.compare(6,5,"apple") == 0)
        cout << "sirul " << str1 << " contine cuvantul apple" << endl;

    if (str2.compare(str2.size()-5,5,"apple") == 0)
        cout << "si " << str2 << " contine mere\n";

    if (str1.compare(6,5,str2,4,5) == 0)
        cout << "ambele siruri contin mere" << endl;

    return 0;
}

