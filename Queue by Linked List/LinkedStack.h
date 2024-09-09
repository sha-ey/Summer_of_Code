#include<iostream>
using namespace std;

class StackNode {
public:
    int val;
    StackNode* next;
    StackNode();
    StackNode(int val);
};
class LinkedStack
{
    private:
    StackNode* top;
    int capacity;
    int currSize;
    public:
    LinkedStack();
    LinkedStack(int size);
    void push(int val);
    void pop();
    int peek();
    bool isEmpty();
};