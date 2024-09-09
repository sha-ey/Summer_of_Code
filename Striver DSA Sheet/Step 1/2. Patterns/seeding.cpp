/*Problem statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*

1  <= T <= 10
1  <= N <= 25
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void seeding(int n) {
	for(int i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<"* ";
		} 
		cout<<endl;
	}
}



int main()
{
    int n;
    cin>>n;
    seeding(n);
    return 0;
}