#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,sum1=0;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j)
                sum+=arr[i][j];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if((i+j)==n-1)
                sum1+= arr[i][j];
    if(sum>sum1)
        cout<<sum-sum1;
    else if(sum1>sum)
        cout<<sum1-sum;
    else if(sum==sum1)
        cout<<'0';
    return 0;
}