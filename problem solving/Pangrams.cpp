#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // cin>>s takes whitespace as termination of input
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            int temp = int(s[i])-97;
            arr[temp]++;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            int temp1 = int(s[i])-65;
            arr[temp1]++;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
}