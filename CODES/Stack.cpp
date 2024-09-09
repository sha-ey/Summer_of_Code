#include<bits/stdc++.h>
using namespace std;




int main()
{
    stack<int> st;

    for(int i=1;i<11;i++)
    {
        st.push(i);
    }

    for(int i=1;i<11;i++)
    {
        if(i%2==1)
        {
            cout<<st.top()<<' ';
            st.pop();
        }
        else{
            st.pop();
        }
    }
    return 0;
}
