#include<iostream>
using namespace std;
void method()
{
    int n;
    cin>>n;
    int height = 1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            height+=1;
        else if(i%2==1)
            height= height*2;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        method();
    return 0;
}