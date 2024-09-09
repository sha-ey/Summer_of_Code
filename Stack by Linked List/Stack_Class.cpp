#include "Stack_Class.h"
Stacks::Stacks()
{
    this->top = -1;
    this->size = 1000;
    cout << "Stack is created" << endl;
}
Stacks::Stacks(int size)
{
    this->top = -1;
    this->size = size;
    cout << "Stack is created" << endl;
}
void Stacks::push(int val)
{
    if (top == size - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        arr[top] = val;
    }
}
void Stacks::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        top--;
    }
}
int Stacks::peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return arr[top];
    }
}

// advancedStack::advancedStack() : Stacks()
// {
//     cout << "Advanced Stack is created" << endl;
// }