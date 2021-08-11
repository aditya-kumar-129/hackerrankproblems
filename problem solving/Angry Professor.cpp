#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
void method()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=0)
            count++;
    }
    if(count<k)
        cout<<"YES"<<endl<<endl;
    else
        cout<<"NO"<<endl;    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        method();
    return 0;
}