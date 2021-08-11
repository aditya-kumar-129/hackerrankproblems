#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if((arr[i][j]>arr[i][j-1])&&(arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i+1][j ]))
                arr[i][j]='X';
        }
    }        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }    
}