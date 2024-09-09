/*Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

Example:
Input: ‘N’ = 3

Output: 

*
**
***
**
*
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec
*/

#include<bits/stdc++.h>

using namespace std;

void nStarTriangle(int n) {
    int space=n;
   int star=0;
   for(int i=0;i<2*n;i++)
   {
       if(i<n)
       {
           star++;
           space--;
       }
    
       else 
       {
            star--;
           space++;
       }
      
       for(int k=0;k<star;k++)
       {
           cout<<"*";
       }
        for(int j=space;j>0;j--)
       {
           cout<<" ";
       }
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