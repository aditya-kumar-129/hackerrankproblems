#include<iostream>
#include<cmath>
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
    long long int total =0;
    for(int i=0;i<n;i++)
        total+=((pow(2,i))*arr[n-i-1]);
    cout<<total<<endl;
}