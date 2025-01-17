/* In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new 
invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls
 into the baskets such that the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

Given the integer array position and the integer m. Return the required force.

 

Example 1:


Input: position = [1,2,3,4,7], m = 3
Output: 3
Explanation: Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum 
magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.*/



#include<bits/stdc++.h>

using namespace std;

 int maxDistance(vector<int>& position, int m) 
    {
        sort(position.begin(),position.end());

        int low=0;
        int high=position.size()-1;
        int res;
       

        while(low<=high)
        {
            int mid = low+(high-low)/2;
            
            int check;
            
            int initial= 1;  
            int prev = position[0];  
            for(int i = 1 ; i < position.size() ; i++)
            {
                if(position[i]-prev >= mid){ 
                    prev = position[i];
                    initial+=1;  
                    if(initial == m ) 
                    check =1; 
                }
            }
            if(initial < m) 
                check =0;
            
            
            if(check)
            {
                res = mid;
                high = mid+1;
                
            }
            else
            {
                low = mid-1; 
            }
        }
        return res;
    }
    
int main()
{

    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        v.emplace_back(d);
    }
    int m=3;
    int res=maxDistance(v,m);
    cout<<res;


    return 0;


}

