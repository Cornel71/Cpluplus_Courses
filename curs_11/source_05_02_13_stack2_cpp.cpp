#include <iostream>
using namespace std;

class Stack
{
private:
    int stackstore[100];
    int SP;

public:
    Stack(void)
    {
        SP = 0;
    }

    void push(int value);
    int pop(void)
    {
        SP=SP-1;
        return stackstore[SP];
    }
};

void Stack::push(int value)
{
    stackstore[SP] = value;
    SP++;
}

int main(void)
{
    Stack little_stack, other_stack, funny_stack;

    little_stack.push(27);
    little_stack.push(5);
    little_stack.push(10);

    other_stack.push(little_stack.pop() + 1);
    other_stack.push(little_stack.pop() + 1);
    funny_stack.push(other_stack.pop() + 2);

    //little_stack.SP++; // decomentati aceasta linie. ce se intampla? de ce?

    cout << funny_stack.pop() << endl;
    cout << other_stack.pop() << endl;
    cout << little_stack.pop() << endl;

   // cout << funny_stack.pop() << endl;
   //cout << other_stack.pop() << endl;
   // cout << little_stack.pop() << endl;

    return 0;
}
