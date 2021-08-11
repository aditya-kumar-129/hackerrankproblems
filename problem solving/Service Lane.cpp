#include<iostream>
using namespace std;
void min(int arr[],int size,int l,int u)
{
    int min=arr[l];
    for(int i=l;i<=u;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<min<<endl;
}
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<t;i++)
    {
        int l,u;
        cin>>l>>u;
        min(arr, n, l, u);
    }
}