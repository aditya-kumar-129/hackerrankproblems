#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int arr_s1[26]={0},arr_s2[26]={0};
        for(int i=0;i<s1.length();i++)
            arr_s1[int(s1[i])-97]=1;
        for(int i=0;i<s2.length();i++)
            arr_s2[int(s2[i])-97]=1;
        int flag=0;
        for(int i=0;i<26;i++)
        {
            if((arr_s1[i]==1)&&(arr_s2[i]==1))
            {
                flag=1;
                break;
            }       
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}