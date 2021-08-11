#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int n;
    cin>>n;
    if(s.length()==1)
    {
        if(s[0]=='a')
            cout<<n<<endl;
        else
            cout<<"0"<<endl;
    }
    else
    {
        long long int count=0;
        long long int x=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                x++; 
        }
        count= (n/s.length())*x;
        n=n-(n/s.length())*s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
                count++; 
        }
        cout<<count<<endl;
    }
}