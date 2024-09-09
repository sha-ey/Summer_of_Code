/*Problem statement
Ninja has been given a task to print the required star pattern and he asked your help for the same.

You must return an ‘N’*’N’ matrix corresponding to the given star pattern.

Example:
Input: ‘N’ = 4

Output: 

****
*  *
*  *
****

Constraints :
1  <= N <= 10^2
Time Limit: 1 sec*/
#include<bits/stdc++.h>

using namespace std;

void getStarPattern(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1)
            {
                cout<<"*";
            }
            else if((i>0&&i<n-1)&&j==0||j==n-1)
            {
                cout<<"*";
            } else {
                cout << " ";
            }
        }
        cout<<'\n';
    }
}



int main()
{
    int n;
    cin>>n;
    getStarPattern(n);
    return 0;
}