#include <iostream>

using namespace std;

int stack[100];
int SP = 0;

void push(int value)
{
    stack[SP] = value;
    SP++;
}

int pop()
{
    SP=SP-1;
    return stack[SP];
}

int main(void)
{
    push(5);
    push(7);
    push(9);


    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    return 0;
}
