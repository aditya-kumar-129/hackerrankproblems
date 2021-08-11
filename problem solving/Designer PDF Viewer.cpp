#include<iostream>
using namespace std;
int main()
{
    int arr[26];
    for(int i=0;i<26;i++)
        cin>>arr[i];
    string s;
    cin>>s;
    int max=arr[int(s[0]-'a')];
    for(int i=1;i<s.length();i++)
        if(arr[int(s[i]-'a')]>max)
            max=arr[int(s[i]-'a')];
    cout<<max*s.length();
}