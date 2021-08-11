#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            flag=1;
    }
    return flag;
}
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int string_length=s.length();
    int table[string_length];
    int count_alphabet[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int temp=int(s[i])-97;
        table[i]=(temp+1)+(count_alphabet[temp])*(temp+1);
        count_alphabet[temp]++;
    }
    for(int i=0;i<n;i++)
    {
        int flag = search(table, string_length, arr[i]);
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
// many test cases are not running because exceeded time limit