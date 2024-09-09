/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/
#include<bits/stdc++.h>

using namespace std;

    int reverse(int x) {
        
        long reverse=0;
        int negative=0;
        if(x<0)
        {
            negative=1;
        }
        x=abs(x);
        while (x > 0) {
        reverse= reverse* 10 + x % 10;
        x /= 10;
        }
        if(negative)
        {
            reverse=reverse*(-1);
        }
        
        if(reverse<-pow(2,31)||reverse>pow(2,31)-1)
       {
        return 0;
       } 
      
        
        return reverse;
       
}

int main()
{
    int n;
    cin>>n;
    int m=reverse(n);
    cout<<m;
    return 0;
}