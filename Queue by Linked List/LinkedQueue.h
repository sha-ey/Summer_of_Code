#include<iostream>
using namespace std;

class QueueNode {
public:
    int val;
    QueueNode* next;
    QueueNode();
    QueueNode(int val);
};

class LinkedQueue
{
    private:
    QueueNode* front;
    QueueNode* rear;
    int capacity;
    int currSize;
    public:
    LinkedQueue();
    LinkedQueue(int size);
    void enqueue(int val);
    void dequeue();
    int peek();
    bool isEmpty();
};