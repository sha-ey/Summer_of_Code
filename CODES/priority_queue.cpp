#include<bits/stdc++.h>
using namespace std;




int main(){
        
    priority_queue<int> p;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<6;i++)
    {
        int key;
        cin>>key;
        p.push(key);
    }

    for(int i=0;i<6;i++)
    {
        cout<<p.top()<<' ';
        p.pop();
    }
    cout<<'\n';
    for(int i=0;i<6;i++)
    {
        int key;
        cin>>key;
        q.push(key);
    }

    for(int i=0;i<6;i++)
    {
        cout<<q.top()<<' ';
        q.pop();
    }
    return 0;

}