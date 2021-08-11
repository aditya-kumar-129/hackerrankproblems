#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min=INT_MAX,temp;
    for(int i=0;i<n-1;i++)
        for (int j=i+1; j<n; j++) 
        {
            temp=abs(arr[i]-arr[j]);
            if(min>temp)
                min=temp;    
        }
        cout<<min<<endl;
}
// 2 test cases are not working 