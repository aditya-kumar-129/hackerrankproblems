#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr_frequency[10001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr_frequency[arr[i]]++;
    }
    int m;
    cin>>m;
    int brr[m];
    int brr_frequency[10001]={0};
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
        brr_frequency[brr[i]]++;
    }
    for(int i=0;i<10001;i++)
    {
        if((arr_frequency[i]-brr_frequency[i])!=0)
            cout<<i<<" ";
    } 
}