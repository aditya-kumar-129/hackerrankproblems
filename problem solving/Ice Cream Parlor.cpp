#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int n;
        cin>>n;
        int arr[n],brr[n]={-1};
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
                if((arr[i]+arr[j])==k)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }   
        }
    }
}