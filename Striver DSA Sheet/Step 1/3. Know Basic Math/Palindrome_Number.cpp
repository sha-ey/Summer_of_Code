/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Constraints:

-231 <= x <= 231 - 1
 */
#include<bits/stdc++.h>

using namespace std;

    bool isPalindrome(int x) {
        long reverse=0;
        int check=x;
        bool result;
        if(x<0)
        {
            result=false;
            return result;
        }
        while (x > 0) {
        reverse= reverse* 10 + x % 10;
        x /= 10;
        }
         if(reverse==check)
            {
             result=true;
            }
         else
         {
            result=false;
         }
            return result;
        
    }

int main()
{
    int n;
    cin>>n;
    bool m=isPalindrome(n);
    cout<<m;
    return 0;
}