#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count=0;
    for(int i=0;i<n-1;)
    {
        if(arr[i+2]==1)
            i++;
        else
            i+=2;
        count++;  
    }
    cout<<count<<endl;
}