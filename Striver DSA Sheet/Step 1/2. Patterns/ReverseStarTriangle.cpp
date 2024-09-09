/*Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *

Constraints :
1  <= N <= 20
Time Limit: 1 sec*/

#include<bits/stdc++.h>

using namespace std;

void nStarTriangle(int n) {
   int h=0;
   
   for(int i=n-1;i>=0;i--)
	{   
        for(int l=0;l<h;l++)
        {
            cout<<" ";
        }
		for(int j=0;j<(2*i+1);j++)
		{
			cout<<"*";
		} 
		h++;
        cout<<endl;
	}
}


int main()
{
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}