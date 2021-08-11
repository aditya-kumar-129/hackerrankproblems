#include <bits/stdc++.h>
using namespace std;
bool solve(string t, string s) 
{
    if(s == t)
        return true;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(t[j] == s[i])
            j++;
        if(j == t.size())
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S = "hackerrank";
        string T;
        cin>>T;
        int result = solve(S, T);
        if(result==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}