/*Problem statement
Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

Example:
Input: ‘N’ = 3

Output: 
C
C B 
C B A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void alphaTriangle(int n) {
 
   
   for(char i=64+n;i>64;i--)
	{
		for(char j=n+64;j>=i;j--)
		{
			cout<<j<<" ";
        
		} 
		cout<<'\n';
	}
}

int main()
{
    int n;
    cin>>n;
    alphaTriangle(n);
    return 0;
}