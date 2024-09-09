/*Problem statement
Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.

Example:
Input: ‘N’ = 3

Output: 
A
B B
C C C
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void alphaRamp(int n) {
    

   
   for(char i=65;i<n+65;i++)
	{
		for(char j=65;j<=i;j++)
		{
			cout<<i<<" ";
        
		} 
	   cout<<'\n';
	}
}


int main()
{
    int n;
    cin>>n;
    alphaRamp(n);
    return 0;
}