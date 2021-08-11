#include <iostream>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    int ar[26]={0};
    for(int i=0;i<s.size();i++)
        ar[s[i]-97]++;
    int count = 0;
    for(int i = 0; i < 26; i++)
        if(ar[i]%2 != 0)
            count++;
    if(count>1)
        cout<<"NO";
    else
        cout<<"YES";
}