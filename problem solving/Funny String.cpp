#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int arr[s.length()-1];
        for(int i=0;i<s.length()-1;i++)
            arr[i]=abs(int(s[i])-s[i+1]);
        reverse(s.begin(),s.end());
        int brr[s.length()-1];
        for(int i=0;i<s.length()-1;i++)
            brr[i]=abs(int(s[i])-s[i+1]);
        int flag;
        for(int i=0;i<s.length()-1;i++)
        {
            if(arr[i]!=brr[i])
            {
                flag=0;
                break;
            }
            else
                flag=1;
        }
        if(flag==0)
            cout<<"Not Funny"<<endl;
        else
            cout<<"Funny"<<endl;      
    }
}