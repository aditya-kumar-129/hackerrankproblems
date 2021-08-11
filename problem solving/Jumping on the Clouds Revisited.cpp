#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0,energy=100;
    for (int i=0; i<n; i+=k)
        energy -= 1 + arr[i] * 2;
    cout<<energy<<endl;
}