#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    
    long long arr[n];
    for(int i =0 ; i <n ; i++)
    {  
       cin >> arr[i];
     }
    
    stack<long long int> stk;
    for(int i =n-1 ; i >= 0 ; i--)
    {  
       stk.push(arr[i]);
    }
   
    long long x = 0;
    
    if(n==1 && k%2 != 0)
        x = -1;
    
    else if(n == k)
    {
        while(k > 1 && !stk.empty())
        {
            x = max(x, stk.top());
              k--; stk.pop();
         }
    }
    
    else if(k<n)
    {
        while(k >1 && !stk.empty())
        { 
            x =max(x,stk.top());
            k--;
            stk.pop();
           
        }
        stk.pop();
        x = max(x,stk.top());
    }
    
    else
    {
        while(!stk.empty())
        {
            x =max(x,stk.top());
            stk.pop();
        }
    }
    cout << x;
    return 0;
}