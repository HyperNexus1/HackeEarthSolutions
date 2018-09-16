#include<iostream>
using namespace std;
int main()
{
    int a[50],b[50],i,n,d,j;
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<d;i++)
    {
        for(j=0;j<n-1;j++)
        {
             b[j]=a[j+1];
        }
        b[j]=a[0];
        for(j=0;j<n;j++)
        {
            a[j]=b[j];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}