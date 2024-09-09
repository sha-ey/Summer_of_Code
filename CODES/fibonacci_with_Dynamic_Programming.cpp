#include<bits/stdc++.h>
#include <windows.h>

using namespace std;

 
  /*long long fib(long long n) {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        {
        return fib(n-1)+fib(n-2);
        }
    }
   */

  long long fib(long long n,vector<long long >&res)
  {
    if(res[n]!=-1)
    {
        return res[n];
    }

    if(n==0||n==1)
    {
        res[n]=n;
    }
    else{
        res[n]=fib(n-1,res)+fib(n-2,res);
    }
    return res[n];
    
  }

int main()
{
    long long n=45;
    
    vector<long long >res(n+1,-1);
    
    
    
    DWORD dw1 = GetTickCount();

    long long l=fib(n,res);
    DWORD dw2 = GetTickCount();

    cout<<l<<'\n';
    cout<<"Time difference is "<<(dw2-dw1)<<" milliSeconds"<<endl;
        return 0;
}


/*#include <ctime>
time_t begin, end;
time(&begin);
ime(&end);
    cout << "Time required = " << difftime(end, begin) << " seconds";*/


/*#include <windows.h>
int main()
{

    DWORD dw1 = GetTickCount();

    //Do something 

    DWORD dw2 = GetTickCount();

    cout<<"Time difference is "<<(dw2-dw1)<<" milliSeconds"<<endl;

}
*/