#include<iostream>
using namespace std;
int count(int brr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
        count+=brr[i]/2;
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[200]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]]++;
    }
    cout<<count(brr,200)<<endl;
    return 0;
}