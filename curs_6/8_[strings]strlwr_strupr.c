#include<stdio.h>


int main ()
{
    char c = 'A';
    char s[] = "A";

    char sir1[]="LOWer Case3!";
    char sir2[]="UppeR Case4";

    //strlwr(c);
    //strlwr(s);
    puts(s);

    strlwr(sir1);
    puts(sir1);

    strupr(sir2);
    puts(sir2);

    //puts(strlwr(sir1));   //converteste sirul in sir doar cu litere mici si il afiseaza
    //puts(strupr(sir2));   //converteste sirul in sir doar cu litere mici si il afiseaza

    //puts(sir1);
    //puts(sir2);

    return 0;
}
