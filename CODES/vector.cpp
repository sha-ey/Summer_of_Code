#include<bits/stdc++.h>
using namespace std;




int main()
{
 
    vector<vector <int>> v;
    vector<int>b;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            b.emplace_back((i*5)+j+1);
        }
        v.emplace_back(b);
        b.clear();
    }

    for(auto i:v)
    {
       for(auto n:i)
       { 
        cout<<n<<' ';
       }
       cout<<'\n';
    }

    return 0;
}
