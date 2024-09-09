/*Problem statement
Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

Given 'N', print the corresponding pattern.

Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1

Constraints :
1  <= N <= 20
Time Limit: 1 sec
*/

#include<bits/stdc++.h>

using namespace std;

void numberCrown(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i)
            {
                cout<<j<<" ";
            }
            else if(j>2*n-i)
            {
                cout<<2*n-j+1<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}


int main()
{
    int n;
    cin>>n;
    numberCrown(n);
    return 0;
}