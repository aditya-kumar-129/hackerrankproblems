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
    int max=-1,index=0;
    for(int i=0;i<n-2;i++)
    {
        if(((arr[i]+arr[i+1])>arr[i+2])&&((arr[i+1]+arr[i+2])>arr[i])&&((arr[i+2]+arr[i])>arr[i+1]))
        {
            max=arr[i]+arr[i+1]+arr[i+2];
            index=i;
        }       
    }
    if(max==-1)    
        cout<<max<<endl;  
    else     
        cout<<arr[index]<<" "<<arr[index+1]<<" "<<arr[index+2];      
}