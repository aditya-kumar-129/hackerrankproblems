#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(v==arr[i])
        {
            cout<<i<<endl;
            break;
        }
    }
}