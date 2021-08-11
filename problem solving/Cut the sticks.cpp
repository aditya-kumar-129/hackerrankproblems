#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    while(arr[n-1]>0)
    {
        int min_value=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0&&min_value>arr[i])
                min_value=arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                count++;
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                continue;
            else
                arr[i]= arr[i]-min_value;
        }
    }
}