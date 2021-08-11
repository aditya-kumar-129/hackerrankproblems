#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int size,int i)
{
    int min= abs(i-arr[0]);
    for(int j=0;j<size;j++)
    {
        if(min>abs(i-arr[j]))
            min= abs(i-arr[j]);
    }
    return min;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    int brr[n]={0};
    for(int i=0;i<m;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        brr[i]=min(arr, m, i);
    int max=brr[0];
    for(int i=0;i<n;i++)
    {
        if(max<brr[i])
            max=brr[i];
    }
    cout<<max<<endl;
}