/*https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=true*/
#include<iostream>
using namespace std;
int max_frequency(int brr[],int size)
{
    int frequency =brr[0];
    for(int i=1;i<size;i++)
        if(frequency<brr[i])
            frequency=brr[i];
    return frequency;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int brr[101]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]]++;
    }
    int arr_length= sizeof(arr)/sizeof(arr[0]);
    int count=max_frequency(brr, 101); 
    if(count==1)
        cout<<arr_length-1;
    else
        cout<<arr_length-count;
}