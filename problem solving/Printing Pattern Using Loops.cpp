//nahi aata mere ko kya logic hai sorry :(
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m,n,x;
    cin>>n;
    k=n;
    m = n+(n-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                    cout<<k;
                if(i>=1)
                {
                    if(j<i)
                        cout<<k-j;
                    else if(j>=i && j<m-i)
                        cout<<k-i;
                    else 
                        cout<<(j-k+1)+1;
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                    cout<<k-j;
                else
                    cout<<(j-k+1)+1;
            }
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                    cout<<k;
                if(j<x)
                    cout<<k-j;
                else if(j>=x && j<m-x)
                    cout<<k-x;
                else 
                    cout<<(j-k+1)+1;   
            }
        }
        cout<<endl;
    }
}