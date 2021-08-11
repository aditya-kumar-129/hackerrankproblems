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
        int sum=0;
        for(int i=0,j=s.length()-1;i<=j;i++,j--)
            sum+= abs(int(s[i])-int(s[j]));
        cout<<sum<<endl;
    }
}