#include<iostream>
using namespace std;
void method()
{
    int num;
    cin>>num;
    int count=0;
    int n= num;
    while(n!=0)
    {
        int temp = n%10;
        if(temp!=0)
        {
            if(num%temp==0)
                count++;
        }
        n/=10;
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        method();
    return 0;
}