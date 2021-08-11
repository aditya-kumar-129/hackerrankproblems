/*https://www.hackerrank.com/challenges/the-hurdle-race/problem*/
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int max=arr[0];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    if(max>k)
        cout<<max-k<<endl;
    else
        cout<<"0"<<endl;
}