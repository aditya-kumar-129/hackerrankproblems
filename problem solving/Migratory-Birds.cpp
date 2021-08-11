#include<iostream>
using namespace std;
int count(int brr[],int size)
{
    int max= brr[0];
    for(int i=0;i<size;i++)
    {
        if(max<=brr[i])
            max=brr[i];
    }
    int index;
    for(int i=0;i<size;i++)
    {
        if(max==brr[i])
        {
            index=i;
            break;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]]++;
    }
    cout<<count(brr,n);
    return 0;
}