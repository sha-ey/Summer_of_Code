/*Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, 
the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, 
the second element occupies the fourth position and so on.*/


#include<bits/stdc++.h>

using namespace std;

void reverse_arr(vector<int>&v)
{
   if(v.size()==1)
   return ;
   int s=*v.begin();
   v.erase(v.begin());
   reverse_arr(v);
   v.emplace_back(s);   
}

int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        v.emplace_back(d);
    }
   
    
    cout<<"Original Array : ";
    for(auto it:v)
    {
        cout<<it<<' ';
    }
    reverse_arr(v);
    cout<<'\n'<<"Reversed Array : ";
    for(auto it:v)
    {
        cout<<it<<' ';
    }

    return 0;
}
