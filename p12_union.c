#include <stdio.h>
#include <string.h>

union Exemplu
{
    int i;
    float f;
    char str[20];
};

struct exemplificare {
   int i;
   float f;
   char str[20];
};


int main( )
{

    union Exemplu test;
    struct exemplificare st;

    test.i = 10;
    st.i = 10;
    printf( "test.i : %d\n", test.i);
    printf( "st.i : %d\n", st.i);

    printf( "\n -------------------\n");


    strcpy( test.str, "C Programming");
    strcpy( st.str, "C Programming");
    printf( "test.str : %s\n", test.str);
    printf( "st.str : %s\n", st.str);

    printf( "\n -------------------\n");


    test.f = 220.5;
    st.f = 220.5;
    printf( "test.f : %.2f\n", test.f);
    printf( "st.f : %.2f\n", st.f);

    printf( "\n -------------------\n");
    printf( "\n -------------------\n");
    printf( "\n -------------------\n");


    printf( "test.i : %d\n", test.i);
    printf( "st.i : %d\n", st.i);
    printf( "test.str : %s\n", test.str);
    printf( "st.str : %s\n", st.str);
    printf( "test.f : %.2f\n", test.f);
    printf( "st.f : %.2f\n", st.f);

    return 0;
}
