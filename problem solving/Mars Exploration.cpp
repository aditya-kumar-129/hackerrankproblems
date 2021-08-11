#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int no_of_SOS= s.length()/3;
    //cout<<no_of_SOS<<endl;
    string s1 = "SOS";
    for(int i=1;i<no_of_SOS;i++)
        s1= s1+"SOS";
    //cout<<s1;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s1[i]!=s[i])
            count++;    
    }
    cout<<count<<endl;
}