/*https://www.hackerrank.com/challenges/beautiful-triplets/problem?isFullScreen=false*/
#include<iostream>
using namespace std;
int search(int arr[],int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            return 1;
            break;
        }       
    }
    return 0;
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count =0;
    for(int i=0;i<n-2;i++)
    {
        int x = search(arr, n, arr[i]+(d));
        int y = search(arr, n, arr[i]+(2*d));
        if(x==1&&y==1)
            count++;
    }
    cout<<count<<endl;
}