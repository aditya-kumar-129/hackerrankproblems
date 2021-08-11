#include<iostream>
using namespace std;
int find_previous_sum(int arr[],int n,int i)
{
    int sum=0;
    for(int j=0;j<i;j++)
        sum+=arr[j];
    return sum;
}
int find_next_sum(int arr[],int n,int i)
{
    int sum=0;
    for(int j=i+1;j<n;j++)
        sum+=arr[j];
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int previous_sum=0,next_sum=0; 
        for(int i=0;i<n;i++)
        {
            previous_sum=find_previous_sum(arr, n, i);
            next_sum=find_next_sum(arr, n, i);
            if(previous_sum==next_sum)
                break;
        }
        
        if(previous_sum==next_sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
// 2 test case is not working