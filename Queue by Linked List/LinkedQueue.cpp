#include "LinkedQueue.h"

QueueNode::QueueNode()
    {
        val = 0;
        next = NULL;
    }
QueueNode::QueueNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }




LinkedQueue::LinkedQueue()
{
    front=nullptr;
    rear=nullptr;
    currSize=0;
    this->capacity=100;
    cout << "Queue is created" << endl;
}
LinkedQueue::LinkedQueue(int capacity)
{
    front=nullptr;
    rear=nullptr;
    currSize=0;
    this->capacity = capacity;
    cout << "Queue is created" << endl;
}

void LinkedQueue::enqueue(int val)
{
    if (currSize == capacity)
    {
        cout << "Queue is full" << endl;
    }
    else if(front==nullptr)
    {
        QueueNode *newQueueNode =new QueueNode(val);
        rear=newQueueNode;
        front=newQueueNode;
        currSize++;
    }
    else
    {
       QueueNode *newQueueNode =new QueueNode(val);
       
       rear->next=newQueueNode;
       rear=newQueueNode;
       currSize++;
    }
}
void LinkedQueue::dequeue()
{
    if (front == nullptr)
    {
        cout << "Queue is empty" << endl;
    }
    else if(front==rear&&front!=nullptr)
    {
        rear=nullptr;
        free(front);
        front=nullptr;
        
    }
    else
    {
        QueueNode *temp=front;
        front=front->next;
        free(temp);
    }
}
int LinkedQueue::peek()
{
    if (front == nullptr)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return front->val;
}
bool LinkedQueue::isEmpty()
{
    if(front==nullptr)
    {
        return true;
    }
    return false;
}
