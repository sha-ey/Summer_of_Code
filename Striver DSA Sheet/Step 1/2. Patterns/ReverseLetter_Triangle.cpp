/*Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void nLetterTriangle(int n) {

 

   
   for(char i=n+65;i>65;i--)
	{
		for(char j=65;j<i;j++)
		{
			cout<<j<<" ";
        
		} 
		cout<<endl;
	}
}


int main()
{
    int n;
    cin>>n;
    nLetterTriangle(n);
    return 0;
}