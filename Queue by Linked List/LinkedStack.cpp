#include "LinkedStack.h"

StackNode::StackNode()
    {
        val = 0;
        next = NULL;
    }
StackNode::StackNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }




LinkedStack::LinkedStack()
{
    top=nullptr;
    currSize=0;
    this->capacity=100;
    cout << "Stack is created" << endl;
}
LinkedStack::LinkedStack(int capacity)
{
    top=nullptr;
    currSize=0;
    this->capacity = capacity;
    cout << "Stack is created" << endl;
}

void LinkedStack::push(int val)
{
    if (currSize == capacity)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
       StackNode *newStackNode =new StackNode(val);
       
       newStackNode->next=top;
       top=newStackNode;
       currSize++;
    }
}
void LinkedStack::pop()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        StackNode *temp=top;
        top=top->next;
        free(temp);
    }
}
int LinkedStack::peek()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return top->val;
    }
}
bool LinkedStack::isEmpty()
{
    if(top==nullptr)
    {
        return true;
    }
    return false;
}
