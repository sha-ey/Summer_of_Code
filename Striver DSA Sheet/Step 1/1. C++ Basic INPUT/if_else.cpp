/*Given two integers, n and m. The task is to check the relation between n and m.

Example 1:

Input:
n = 4
m = 8
Output: lesser
Explanation:
4 < 8 so print 'lesser'.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function compareNM() which takes two integer n and m as input parameters and returns string
'lesser' if n < m
'equal' if n == m
'greater' if n > m

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
-109 <= m , n <= 109*/

#include<bits/stdc++.h>
using namespace std;


string compareNM(int n, int m){
        
        if(n>m)
        {
            return "greater";
        }
        else if(n<m)
        {
            return "lesser";
        }
        else
        {
            return "equal";
        }
    }

int main()
{
    return 0;
}

