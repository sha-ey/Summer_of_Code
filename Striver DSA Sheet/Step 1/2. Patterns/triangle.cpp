/*Problem statement
Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers representing the row number.

For every value of ‘N’, help sam to print the corresponding Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3

Constraints :
1  <= N <= 25
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void triangle(int n) {
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		} 
		cout<<endl;
	}
}



int main()
{
    int n;
    cin>>n;
    triangle(n);
    return 0;
}