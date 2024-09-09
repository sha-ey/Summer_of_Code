/*Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

Constraints :
1  <= N <= 25
Time Limit: 1 sec

*/
#include<bits/stdc++.h>

using namespace std;

void symmetry(int n) {
    n = 2*n ;
    for(int i = 0;i < n;i++) {

        for(int j = 0; j < n;j++) {

           
            if(i < n/2 && (j < (n/2 -i) ||j >= (n/2 + i))) {
                cout << '*' ;
            }
            else if(i >= n/2 && (j <= (i-n/2) || j >= (n-i+n/2-1))) {
                cout << '*' ;
            }

            else {
                cout << ' ';
            }

            cout << ' ';
        }

        cout << '\n';
    }
}

int main()
{
    int n;
    cin>>n;
    symmetry(n);
    return 0;
}