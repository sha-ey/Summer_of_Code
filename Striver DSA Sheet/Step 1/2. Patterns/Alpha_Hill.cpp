/*Problem statement
Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
*/

#include<bits/stdc++.h>

using namespace std;

void alphaHill(int n) {
 char startChar = 'A';
    
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n - i - 1; j++) {
          cout << " ";
        }
        
       
        for (int j = 0; j <= i; j++) {
           cout <<(char)(startChar + j)<<' ';
        }
        
       
        for (int j = i - 1; j >= 0; j--) {
         cout << (char)(startChar + j)<<' ';
        }
        
   cout << '\n';
    }
}

int main()
{
    int n;
    cin>>n;
    alphaHill(n);
    return 0;
}