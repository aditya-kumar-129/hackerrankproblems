#include<iostream>
using namespace std;
int main()
{
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int count=0;
    if(p>s)
        cout<<"0"<<endl;
    else
    {
        while(s>=m&&s>=p)
        {
            if(p>=m)
            {
                s-=p;
                p-=d;
                count++;
            }
            else 
            {
                s-=m;
                count++;
            }
        }
        cout<<count;
        } 
}