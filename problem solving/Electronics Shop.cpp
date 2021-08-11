#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,m;
    cin>>s>>n>>m;
    int keyboard[1001],usb[1001];
    for(int i=0;i<n;i++)
        cin>>keyboard[i];
    for(int i=0;i<m;i++)  
        cin>>usb[i];
    int a,res=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(keyboard[i]+usb[j]<=s)
                res=max(res,keyboard[i]+usb[j]);
    cout<<res<<endl;
    return 0;
}