/*Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6

Constraints :
1  <= T <= 10
1  <= N <= 20
Time Limit: 1 sec
*/
#include<bits/stdc++.h>

using namespace std;

void nNumberTriangle(int n) {
 int s=1;
  for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<s<<" ";
            s++;
		} 
		cout<<endl;
	}
}


int main()
{
    int n;
    cin>>n;
    nNumberTriangle(n);
    return 0;
}