/*Problem statement
Ninja has been given a task to print the required pattern and he asked for your help with the same.

You must print a matrix corresponding to the given number pattern.

Example:
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 10^2
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void getNumberPattern(int n) {
 
 pair<int,int>cent={n-1,n-1};
 for(int i=0;i<2*n-1;i++)
 {
    for(int j=0;j<2*n-1;j++)
    {
       cout<<1+max(abs(i-cent.first),abs(j-cent.second)); 
    }
    cout<<'\n';
 }
}




int main()
{
    int n;
    cin>>n;
    getNumberPattern(n);
    return 0;
}