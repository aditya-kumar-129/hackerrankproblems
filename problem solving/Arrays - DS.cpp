#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int brr[n];
    for(int i=0;i<n;i++)
        brr[i]=arr[n-1-i];
    for(int i=0;i<n;i++)
        cout<<brr[i]<<" ";
}