#include "Stack_Class.h"

int main()
{
    cout << "Hello, World!" << endl;
    Stacks *st = new Stacks();
    st->push(1);
    st->push(2);
    cout << st->peek() << endl;
    st->pop();
    cout << st->peek() << endl;
    st->pop();
    cout << st->peek() << endl;

    return 0;
}