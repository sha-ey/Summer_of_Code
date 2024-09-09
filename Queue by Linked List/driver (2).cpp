#include "LinkedStack.h"

int main()
{
    cout << "Program Start!" << endl;
    LinkedStack *st = new LinkedStack();
    int a=1;
    while(a!=100)
    {
        st->push(a);
        a++;
    }
    st->push(1);
    st->push(2);
    cout << st->peek() << endl;
    st->pop();
    cout << st->peek() << endl;
    st->pop();
    cout << st->peek() << endl;

    return 0;
}