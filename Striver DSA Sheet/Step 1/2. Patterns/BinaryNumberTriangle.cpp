/*Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

You are required to print the pattern as shown in the examples below.

Example:
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec
*/

#include<bits/stdc++.h>

using namespace std;

void nBinaryTriangle(int n) {
   int k;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            k=1;
        }
        else
        {
            k=0;
        }
        for(int j=0;j<i;j++)
        {
            cout<<k%2<<" ";
            k++;
        }
    cout<<endl;
    }
}



int main()
{
    int n;
    cin>>n;
    nBinaryTriangle(n);
    return 0;
}