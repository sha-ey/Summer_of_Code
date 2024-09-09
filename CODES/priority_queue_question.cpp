#include<bits/stdc++.h>

using namespace std;
int main(){
        
    priority_queue<int> p;
    for(int i=0;i<6;i++)
    {
        int key;
        cin>>key;
        p.push(key);
    }
    
    while(p.size()>1)
    {
        int t;
        int s=p.top();
        p.pop();
        t=p.top();
        p.pop();
        if(s==t)
        {
            continue;
        }
        else{
            p.push(s-t);
        }
    }

    if(p.size()==1)
    {
        cout<<p.top();
    }
    else
    {
        cout<<'\n'<<0;
    }
    return 0;

}