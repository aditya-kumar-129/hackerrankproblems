#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        int j;
        for(j=0;j<n-1;j++)
            arr[j]=arr[j+1];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}