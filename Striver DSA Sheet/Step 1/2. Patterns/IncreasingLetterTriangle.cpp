/*
Contributed by
25 upvotes
Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec

*/

#include<bits/stdc++.h>

using namespace std;

void nLetterTriangle(int n) {
   for(char i=65;i<n+65;i++)
{
     for (char j = 65; j <= i; j++) {
       cout << j << " ";
     }
     cout << '\n';
   }
}


int main()
{
    int n;
    cin>>n;
    nLetterTriangle(n);
    return 0;
}