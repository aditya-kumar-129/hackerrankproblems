#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count_uppercase=0;
        for(int i=0;i<s.length();i++)
        {
            int temp = int(s[i]);
            if(temp>=65&&temp<=90)
                count_uppercase++;       
        }
        cout<<count_uppercase+1<<endl;
}