#include<bits/stdc++.h>
using namespace std;


void delete_key(int key,unordered_map<int,int> &m)
{
    if(m.find(key)==m.end()){
        cout<<"Entered key not in map."<<'\n';
    }
    else{
        if(m[key]==1)
        {
         m.erase(key);
        }
         else{
         m[key]-=1;
     }
    }
}

int main()
{
    unordered_map<int,int>m;
    cout<<"Give entry for map elements:"<<'\n';
    for(int i=0;i<10;i++)
    {
        int s;
    
        cin>>s;
        if(m.find(s)==m.end())
        {
            
            m[s]=1;
        }
        else{
            m[s]+=1;
        }
    }
    for(auto it:m)
    {
        cout<<"Frequency of "<<it.first<<" is = "<<it.second<<'\n';
    }

   cout<<"Enter the key you wish to delete:";
   int key;
   cin>>key;

   delete_key(key,m);
   for(auto it:m)
    {
        cout<<"Frequency of "<<it.first<<" is = "<<it.second<<'\n';
    }
   
    
    
    return 0;
}
