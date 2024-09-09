/*
Example 1:
Input:N = 153
Output:True
Explanation: 13+53+33 = 1 + 125 + 27 = 153

Example 2:
Input:N = 371
Output: True
Explanation: 33+53+13 = 27 + 343 + 1 = 371
*/

#include<bits/stdc++.h>

using namespace std;

bool is_armstrong(int a)
{
    int check =a;
    vector<int>digits;
    int sum=0,dig=0;
    while(a>0)
    {
        digits.emplace_back(a%10);
        a=a/10;
        dig++;
    }
    

    for(auto it:digits)
    {
        sum+=pow(it,dig);
        cout<<sum<<'\n';
    }
cout<<sum<<'\n';

    if(sum==check)
        return true;
    return false;        
}

int main(){
    
    int a;
    cout<<"Enter a number to check armstrong number or not:";
    cin>>a;
    bool res=is_armstrong(a);
    if(res)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout<<pow(5,3);
    return 0;

}