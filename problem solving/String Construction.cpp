#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int total_cost=0;
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {
            if(arr[int(s[i])-97])
                continue;
            else
            {
                arr[int(s[i])-97]=1;
                total_cost++;
            }
                
        }
        cout<<total_cost<<endl;
    }
}