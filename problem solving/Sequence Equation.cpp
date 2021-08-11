#include<iostream>
using namespace std;
int index_return(int arr[],int size,int key)
{
    int index;
    for(int i=1;i<=size;i++)
    {
        if(key==arr[i])
            index=i;
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        int key_index = index_return(arr, n,i);
        int temp = index_return(arr, n, key_index);
        cout<<temp<<endl;
    }
}