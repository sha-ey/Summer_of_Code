#include "driver.h"

int main()
{
    cout << "Program Start!" << endl;
    LinkedQueue *st = new LinkedQueue();
    LinkedStack *st1=new LinkedStack();
    int a=1;
    while(a!=100)
    {
        st->enqueue(a);
        st1->push(a);
        a++;
    }
    while(a!=0)
    {
        cout<<st->peek()<<' ';
        cout<<st1->peek()<<endl;
        st->dequeue();
        st1->pop();
        a--;
    }
    return 0;
}