#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int temp = arr[n-1];
    int brr[temp]={0};
    for(int i=0;i<n;i++)
        brr[arr[i]]++;
    for(int i=0;i<=temp;i++)
        cout<<brr[i]<<" ";
}