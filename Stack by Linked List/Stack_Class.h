#include <iostream>
using namespace std;
class Stacks
{
protected:
    int top;
    int arr[1000];
    int size;

public:
    Stacks();
    Stacks(int size);
    void push(int val);
    void pop();
    int peek();
};
// class advancedStack : public Stacks
// {
// public:
//     advancedStack();
//     void Greetings()
//     {
//         cout << top << endl;
//         cout << "Hello, World!" << endl;
//     }
// };
